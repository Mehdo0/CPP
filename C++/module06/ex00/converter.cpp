/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:08:33 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/07 18:28:54 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

bool handlePseudoLiterals(const std::string& s) {
    if (s == "nan" || s == "nanf") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: nanf\n";
        std::cout << "double: nan\n";
        return (true);
    } 
    else if (s == "+inf" || s == "inf" || s == "+inff" || s == "inff") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: +inff\n";
        std::cout << "double: +inf\n";
        return (true);
    } 
    else if (s == "-inf" || s == "-inff") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: -inff\n";
        std::cout << "double: -inf\n";
        return (true);
    }
    return (false);
}

bool    is_valid_num(const std::string& input)
{
    size_t  i = 0;
    size_t  n = input.size();
    if (n == 0) return (false);
    if (input[i] == '+' || input[i] == '-') i++;
    if (i >= n) return (false);
    bool sawDigit = false;

    while (i < n && isdigit((unsigned char)input[i]))
    {
        sawDigit = true;
        i++;
    }
    if (i < n && input[i] == '.')
    {
        i++;
        while (i < n && isdigit((unsigned char)input[i]))
        {
            sawDigit = true;
            i++;
        }
    }
    if (!sawDigit) return (false);
    if (i < n && (input[i] == 'e' || input[i] == 'E')) {
        i++;
        if (i < n && (input[i] == '+' || input[i] == '-')) i++;
        if (i >= n || !isdigit((unsigned char)input[i])) return (false);
        while (i < n && isdigit((unsigned char)input[i])) i++;
    }
    if (i < n && input[i] == 'f') i++;

    return (i == n);
}

void printAsChar(long double v, bool ok)
{
    if (!ok || v < 0 || v > 127) {
        std::cout << "char: impossible\n";
        return;
    }
    int iv = static_cast<int>(v);
    unsigned char uc = static_cast<unsigned char>(iv);
    if (std::isprint(uc))
        std::cout << "char: '" << static_cast<char>(uc) << "'\n";
    else
        std::cout << "char: Non displayable\n";
}


void printAsInt(long double v, bool ok)
{
    if (!ok ||
    v < static_cast<long double>(std::numeric_limits<int>::min()) ||
    v > static_cast<long double>(std::numeric_limits<int>::max()))
    {
        std::cout << "int: impossible\n";
        return;
    }
    else
        std::cout << "int: " << static_cast<int>(v) << std::endl;
}


void printAsFloat(long double v, bool ok)
{
    std::cout << "float: ";
    if (!ok) { std::cout << "impossible\n"; return; }

    float f = static_cast<float>(v);

    // save/restore
    std::streamsize oldPrec = std::cout.precision();
    std::ios::fmtflags oldFlags = std::cout.flags();

    bool integral = std::floor(v) == v;
    if (integral) {
        std::cout << std::fixed << std::setprecision(1) << f << "f\n";
    } else {
        std::cout.unsetf(std::ios::floatfield);
        std::cout << std::setprecision(6) << f << "f\n";
    }

    std::cout.flags(oldFlags);
    std::cout.precision(oldPrec);
}


void printAsDouble(long double v, bool ok)
{
    std::cout << "double: ";
    if (!ok) {
        std::cout << "impossible\n";
        return;
    }
    std::streamsize oldPrec = std::cout.precision();
    std::ios::fmtflags oldFlags = std::cout.flags();
    bool integral = std::floor(v) == v;
    std::cout.setf(std::ios::fixed);
    std::cout << std::setprecision(integral ? 1 : 6) << static_cast<double>(v) << "\n";
    std::cout.flags(oldFlags);
    std::cout.precision(oldPrec);
}

bool parseLongDouble(const std::string& s, long double& out) {
    std::istringstream iss(s);
    iss >> out;
    if (iss.fail()) return false;
    iss >> std::ws;
    return iss.eof();
}


void ScalarConverter::convert(const std::string& input)
{
    if (input.empty()) {
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
        return;
    }
    if (handlePseudoLiterals(input)) return;
    if (input.size() == 1 && !std::isdigit((unsigned char)input[0]))
    {
        char c = input[0];
        std::cout << "char: "   << "'" << c << "'" << "\n";
        std::cout << "int: "    << static_cast<unsigned char>(c) << "\n";
        std::cout << "float: "  << static_cast<float>(static_cast<unsigned char>(c)) << "f\n";
        std::cout << "double: " << static_cast<double>(static_cast<unsigned char>(c)) << "\n";
        return;
    }
    else if (is_valid_num(input))
    {
        std::string numeric = input;
        if (!numeric.empty() && numeric[numeric.size()-1] == 'f')
            numeric.erase(numeric.size()-1);

        long double num = 0.0L;
        bool ok = parseLongDouble(numeric, num);
        printAsChar(num, ok);
        printAsInt(num, ok);
        printAsFloat(num, ok);
        printAsDouble(num, ok);
        return;
    }
    else
    {
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
    }
}