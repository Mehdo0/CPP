/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:09:27 by mehdi             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/20 09:42:47 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>

=======
/*   Updated: 2025/10/23 11:57:20 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
>>>>>>> 5a97a75 (;)

std::vector<int> parseAndValidateInput(int argc, char **argv) {
    if (argc < 2) {
        throw std::runtime_error("Error: No input numbers provided.");
    }

    std::vector<int> numbers;
    std::string max_int_str = "2147483647"; 

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

<<<<<<< HEAD
std::vector<int> sorting_algo(std::vector<int> &list){
    
}
=======
void generateJacobsthalIndices(std::vector<size_t>& sequence, size_t num_losers) {
    if (num_losers == 0) return;

    std::vector<size_t> jacob_nums;
    jacob_nums.push_back(0);
    jacob_nums.push_back(1);

    while (jacob_nums[jacob_nums.size() - 2] < num_losers) { //J(n) = J(n-1) + 2 * J(n-2)//
        size_t next_jacob = jacob_nums.back() + 2 * jacob_nums[jacob_nums.size() - 2];
        jacob_nums.push_back(next_jacob);
    }

    size_t last_jacob = 1;
    for (size_t i = 3; i < jacob_nums.size(); ++i) { //travail sur des chunk pour cree la sequence final//
        size_t current_jacob = jacob_nums[i];
        for (size_t j = current_jacob; j > last_jacob; --j) {
            if (j - 1 < num_losers) {
                sequence.push_back(j - 1);
            }
        }
        last_jacob = current_jacob;
    }
    
    if (num_losers > 0) { //cas isoler//
        sequence.push_back(0);
    }
}


void fordJohnsonSort(std::vector<int>& list) {
    if (list.size() <= 1) {
        return;
    }

    std::vector<int> main_chain;
    std::vector<int> pend;
    int straggler = -1;

    if (list.size() % 2 != 0) {
        straggler = list.back();
        list.pop_back();
    }

    for (size_t i = 0; i < list.size(); i += 2) {
        if (list[i] > list[i+1]) {
            main_chain.push_back(list[i]);
            pend.push_back(list[i+1]);
        } else {
            main_chain.push_back(list[i+1]);
            pend.push_back(list[i]);
        }
    }

    std::vector<int> main_chain_copy = main_chain; 
    
    fordJohnsonSort(main_chain); // trie les winners

    std::vector<int> sorted_list = main_chain;
    size_t first_loser_index = 0;

    int first_winner = sorted_list[0];
    for (size_t i = 0; i < main_chain_copy.size(); ++i) {
        if (main_chain_copy[i] == first_winner) { //trouve le perdant contre le pire winner
            first_loser_index = i;
            break;
        }
    }
    
    sorted_list.insert(sorted_list.begin(), pend[first_loser_index]); //l'ajoute ici ! :)

    pend.erase(pend.begin() + first_loser_index);
    main_chain_copy.erase(main_chain_copy.begin() + first_loser_index); //et l'enleve ici ! :(

    std::vector<size_t> insert_sequence;
    generateJacobsthalIndices(insert_sequence, pend.size());

    for (size_t i = 0; i < insert_sequence.size(); ++i) {
        size_t loser_index = insert_sequence[i]; 
        int value_to_insert = pend[loser_index]; 
        int corresponding_winner = main_chain_copy[loser_index]; 

        std::vector<int>::iterator end_of_search = std::lower_bound(sorted_list.begin(), sorted_list.end(), corresponding_winner);
        std::vector<int>::iterator position = std::lower_bound(sorted_list.begin(), end_of_search, value_to_insert);
        sorted_list.insert(position, value_to_insert);
    }
    
    if (straggler != -1) {
        std::vector<int>::iterator position = std::lower_bound(sorted_list.begin(), sorted_list.end(), straggler);
        sorted_list.insert(position, straggler);
    }

    list = sorted_list;
}

/*---------------Tout pareil mais avec deque a la place de vector-------------------*/

void generateJacobsthalIndices(std::deque<size_t>& sequence, size_t num_losers) {
    if (num_losers == 0) return;

    std::deque<size_t> jacob_nums;
    jacob_nums.push_back(0);
    jacob_nums.push_back(1);

    while (jacob_nums[jacob_nums.size() - 2] < num_losers) {
        size_t next_jacob = jacob_nums.back() + 2 * jacob_nums[jacob_nums.size() - 2];
        jacob_nums.push_back(next_jacob);
    }

    size_t last_jacob = 1;
    for (size_t i = 3; i < jacob_nums.size(); ++i) {
        size_t current_jacob = jacob_nums[i];
        for (size_t j = current_jacob; j > last_jacob; --j) {
            if (j - 1 < num_losers) {
                sequence.push_back(j - 1);
            }
        }
        last_jacob = current_jacob;
    }
    
    if (num_losers > 0) {
        sequence.push_back(0);
    }
}


void fordJohnsonSort(std::deque<int>& list) {
    if (list.size() <= 1) {
        return;
    }

    std::deque<int> main_chain;
    std::deque<int> pend;
    int straggler = -1;

    if (list.size() % 2 != 0) {
        straggler = list.back();
        list.pop_back();
    }

    for (size_t i = 0; i < list.size(); i += 2) {
        if (list[i] > list[i+1]) {
            main_chain.push_back(list[i]);
            pend.push_back(list[i+1]);
        } else {
            main_chain.push_back(list[i+1]);
            pend.push_back(list[i]);
        }
    }

    std::deque<int> main_chain_copy = main_chain; 
    
    fordJohnsonSort(main_chain); 

    std::deque<int> sorted_list = main_chain;
    size_t first_loser_index = 0;

    int first_winner = sorted_list[0];
    for (size_t i = 0; i < main_chain_copy.size(); ++i) {
        if (main_chain_copy[i] == first_winner) {
            first_loser_index = i;
            break;
        }
    }
    
    sorted_list.insert(sorted_list.begin(), pend[first_loser_index]);

    pend.erase(pend.begin() + first_loser_index);
    main_chain_copy.erase(main_chain_copy.begin() + first_loser_index);

    std::deque<size_t> insert_sequence;
    generateJacobsthalIndices(insert_sequence, pend.size());

    for (size_t i = 0; i < insert_sequence.size(); ++i) {
        size_t loser_index = insert_sequence[i]; 
        int value_to_insert = pend[loser_index]; 
        int corresponding_winner = main_chain_copy[loser_index]; 

        std::deque<int>::iterator end_of_search = std::lower_bound(sorted_list.begin(), sorted_list.end(), corresponding_winner);
        std::deque<int>::iterator position = std::lower_bound(sorted_list.begin(), end_of_search, value_to_insert);
        sorted_list.insert(position, value_to_insert);
    }
    
    if (straggler != -1) {
        std::deque<int>::iterator position = std::lower_bound(sorted_list.begin(), sorted_list.end(), straggler);
        sorted_list.insert(position, straggler);
    }

    list = sorted_list;
}
>>>>>>> 5a97a75 (;)
