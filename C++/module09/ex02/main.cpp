/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:11 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/10/14 15:28:12 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
    try {
        std::vector<int> my_numbers = parseAndValidateInput(ac, av);
        
        std::cout << "Successfully parsed " << my_numbers.size() << " numbers." << std::endl;
        my_numbers = sorting_algo(my_numbers);
        for (std::vector<int>::iterator it = my_numbers.begin(); it != my_numbers.end(); it++){
            std::cout << *it << ", ";
        }
        std::cout << "\n";

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}