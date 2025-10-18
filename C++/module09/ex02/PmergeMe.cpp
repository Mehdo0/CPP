/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:09:27 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/18 14:35:58 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

std::vector<int> parseAndValidateInput(int argc, char **argv) {
    if (argc < 2) {
        throw std::runtime_error("Error: No input numbers provided.");
    }

    std::vector<int> numbers;
    std::string max_int_str = "2147483647"; //Max_int

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg.empty()) {
            throw std::runtime_error("Error: Empty argument found.");
        }
        for (size_t j = 0; j < arg.length(); ++j) {
            if (!isdigit(arg[j])) {
                throw std::runtime_error("Error: Input must contain only positive integers.");
            }
        }
        if (arg.length() > max_int_str.length() || 
           (arg.length() == max_int_str.length() && arg > max_int_str)) {
            throw std::runtime_error("Error: Number is too large.");
        }
        int num;
        std::stringstream ss(arg);
        ss >> num;
        if (ss.fail() || !ss.eof()) {
             throw std::runtime_error("Error: Invalid number format.");
        }
        numbers.push_back(num);
    }
    return numbers;
}
