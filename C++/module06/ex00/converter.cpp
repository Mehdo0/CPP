/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:08:33 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/06 21:34:16 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

void ScalarConverter::convert(const std::string& input) {
    if (isdigit(input[0])){
        long double num = 0;
        
    }
    if (isalpha(input[0])){
        if (handlePseudoLiterals(input))
            return ;
        else
        {
            std::cout << "char: " << input << std::endl;
            std::cout << "int: " << static_cast<unsigned char>(input[0]) << std::endl;
            std::cout << "float: " << static_cast<float>(input[0]) << std::endl;
            std::cout << "double: " << static_cast<double>(input[0]) << std::endl;
            return ;
        }
    }
}

bool parseLongDouble(const std::string& s, long double& out) {
    std::istringstream iss(s);
    iss >> out;
    iss >> std::ws;
    return iss && iss.peek() == std::char_traits<char>::eof();
}

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