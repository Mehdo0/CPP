/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:02:41 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/07 10:10:13 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main() {
    try {
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);
        std::vector<int>::iterator itv = easyfind(v, 20);
        std::cout << "Found in vector: " << *itv << std::endl;
        std::list<int>::iterator itl = easyfind(l, 3);
        std::cout << "Found in list: " << *itl << std::endl;
        easyfind(v, 99);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}