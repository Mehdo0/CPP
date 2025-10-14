#include "btc.hpp"
#include <cstdlib>
#include <utility>


static std::string cleaner(std::string str){
    std::string cleaned_str;
    for (size_t i = 0; i < str.length(); ++i) {
        if (!isspace(str[i])) {
            cleaned_str += str[i];
        }
    }
    return cleaned_str;
}


static bool is_valid_line(const std::string &line, char separator) {
    if (line.empty()) {
        std::cerr << "Error: Empty line.\n";
        return false;
    }

    size_t sep_pos = line.find(separator);
    if (sep_pos == std::string::npos) {
        std::cerr << "Error: Bad input => " << line << std::endl;
        return false;
    }

    std::string date = line.substr(0, sep_pos);
    std::string value_str = line.substr(sep_pos + 1);

    size_t first = date.find_first_not_of(" \t");
    if (first == std::string::npos) return false;
    size_t last = date.find_last_not_of(" \t");
    date = date.substr(first, (last - first + 1));

    first = value_str.find_first_not_of(" \t");
    if (first == std::string::npos) return false;
    last = value_str.find_last_not_of(" \t");
    value_str = value_str.substr(first, (last - first + 1));

    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        std::cerr << "Error: Bad date format => " << date << std::endl;
        return false;
    }

    if (value_str.empty()) return false;
    if (value_str[0] == '-') {
        std::cerr << "Error: Not a positive number.\n";
        return false;
    }
    char* end = NULL;
    double val = std::strtod(value_str.c_str(), &end);
    if (*end != '\0') {
        std::cerr << "Error: Invalid number format => " << value_str << std::endl;
        return false;
    }
    if (val > 1000) {
        std::cerr << "Error: Too large a number.\n";
        return false;
    }

    return true;
}


void bitcoin::read_DB(const std::string &filename, char separator) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file: " << filename << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);

    while (std::getline(file, line)) {
        line = cleaner(line);
        std::stringstream ss(line);
        std::string key, value;

        if (std::getline(ss, key, separator) && std::getline(ss, value)) {
            if (separator == ',') {
                this->dataCSV[key] = value;
            } else {
                 if (!is_valid_line(line, separator))
                    continue;
                this->dataInput.insert(std::make_pair(key, value));
            }
        }
    }
    file.close();
}


static std::map<std::string, std::string>::const_iterator find_closest_date(
    const std::string &date, const std::map<std::string, std::string> &data)
{
    if (data.empty()) {
        return data.end();
    }

    std::map<std::string, std::string>::const_iterator it = data.upper_bound(date);

    if (it == data.begin()) {
        return data.end();
    }

    --it;
    return it;
}


void bitcoin::calculate(){
    std::cout << "\n";
    for (std::multimap<std::string, std::string>::iterator it = dataInput.begin(); it != dataInput.end(); ++it) {
        const std::string& date = it->first;
        const std::string& inputValueStr = it->second;

        std::map<std::string, std::string>::const_iterator ite = find_closest_date(date, this->dataCSV);
        if (ite == this->dataCSV.end()) {
            std::cerr << "Error: No historical data available for date => " << date << std::endl;
            continue;
        }

        double db_value = std::atof(ite->second.c_str());
        double input_value = std::atof(inputValueStr.c_str());
        ResultData result;
        result.inputValue = inputValueStr;
        result.calculatedValue = db_value * input_value;
        this->dataResult.insert(std::make_pair(date, result));
    }
}

