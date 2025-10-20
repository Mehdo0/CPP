/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:09:27 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/15 15:49:35 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <algorithm>


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

std::vector<int> sorting_algo(std::vector<int> &list){
    if (list.size() <= 1){
        return (list);
    }
    std::vector<int> winners;
    std::vector<int> losers;
    int straggler = -1;
    if (list.size() % 2 != 0){
        straggler = *list.end();
        list.pop_back();
    }
    for (int i = 0; i != list.size(); i += 2){
        if (!list[i + 1])
        {
            break;
        }
        else if (list[i] > list[i + 1]){
            winners.push_back(list[i]);
            losers.push_back(list[i + 1]);
        }
        else if (list[i] < list[i + 1])
        {
            losers.push_back(list[i]);
            winners.push_back(list[i + 1]);
        }
        i += 2;
    }
    std::vector<int> sorted_winners = sorting_algo(winners);
    sorted_winners.insert(sorted_winners.begin(), losers[0]);
    std::vector<int> indices;
    indices.push_back(0);
    indices.push_back(1);
    for (int i = 2; i != losers.size(); i++){
        indices.push_back(indices[indices.size() - 1] + (2 * indices[indices.size() - 2]));
    }
    size_t last_jacob = 1;
    for (size_t i = 2; i < indices.size(); ++i) {
        size_t current_jacob = indices[i];
        for (size_t j = current_jacob; j > last_jacob; --j) {
            if (j <= num_losers) {
                // The indices are 0-based, so we use j-1
                sequence.push_back(j - 1);
            }
        }
        last_jacob = current_jacob;
    }
    for (int i = 0; i != indices.size(); i++){
        int loser_index = indices[i];
        int value_to_insert = losers[loser_index];
        std::vector<int>::iterator position = std::lower_bound(sorted_winners.at(indices[i - 1]), sorted_winners.at(indices[i]), value_to_insert);
        sorted_winners.insert(sorted_winners.at(position), value_to_insert);
    }
}