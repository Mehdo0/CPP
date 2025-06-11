/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:45:47 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/09 16:26:57 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string& line, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0, found;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result.append(line, pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += line.substr(pos);
    return result;
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty (infinite replacement)\n";
        return 1;
    }

    std::ifstream input(filename.c_str());
    if (!input) {
        std::cerr << "Error: cannot open input file.\n";
        return 1;
    }

    std::string outFilename = filename + ".replace";
    std::ofstream output(outFilename.c_str());
    if (!output) {
        std::cerr << "Error: cannot create output file.\n";
        return 1;
    }

    std::string line;
    while (std::getline(input, line)) {
        output << replaceAll(line, s1, s2) << '\n';
    }

    return 0;
}
