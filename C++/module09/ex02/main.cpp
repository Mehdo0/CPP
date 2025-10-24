/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:11 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/10/14 15:28:12 by mmouaffa         ###   ########.fr       */
=======
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:50:18 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/23 11:33:45 by mehdi            ###   ########.fr       */
>>>>>>> 5a97a75 (;)
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

<<<<<<< HEAD
int main(int ac, char **av){
    try {
        std::vector<int> my_numbers = parseAndValidateInput(ac, av);
        
        std::cout << "Successfully parsed " << my_numbers.size() << " numbers." << std::endl;
        my_numbers = sorting_algo(my_numbers);
        for (std::vector<int>::iterator it = my_numbers.begin(); it != my_numbers.end(); it++){
            std::cout << *it << ", ";
        }
        std::cout << "\n";
=======
void printList(const std::string& prefix, const std::vector<int>& list) {
    std::cout << prefix;
    if (list.size() > 10){
        for (size_t i = 0; i < 5; ++i) {
            std::cout << " " << list[i];
        }
        std::cout << " [...] ";
        for (size_t i = list.size() - 5; i < list.size(); ++i) {
            std::cout << " " << list[i];
        }
    }
    else{
        for (size_t i = 0; i < list.size(); ++i) {
            std::cout << " " << list[i];
        }
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    try {
        std::vector<int> original_list = parseAndValidateInput(argc, argv);
        printList("Before:", original_list);

        std::vector<int> vec_list = original_list;
        std::clock_t start_vec = std::clock();
        fordJohnsonSort(vec_list);
        std::clock_t end_vec = std::clock();
        double time_vec = 1000000.0 * (end_vec - start_vec) / CLOCKS_PER_SEC;

        std::deque<int> deq_list(original_list.begin(), original_list.end());
        std::clock_t start_deq = std::clock();
        fordJohnsonSort(deq_list);
        std::clock_t end_deq = std::clock();
        double time_deq = 1000000.0 * (end_deq - start_deq) / CLOCKS_PER_SEC;

        printList("After: ", vec_list);
        
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << original_list.size() 
                  << " elements with std::vector : " << time_vec << " us" << std::endl;
        
        std::cout << "Time to process a range of " << original_list.size() 
                  << " elements with std::deque  : " << time_deq << " us" << std::endl;
>>>>>>> 5a97a75 (;)

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}