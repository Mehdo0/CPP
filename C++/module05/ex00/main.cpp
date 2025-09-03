/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:40:19 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/01 11:53:30 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

int main() {

    try{
        Bureaucrat a("Alice", 42);
        std::cout << a << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat b("Bob", 0);
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat c("Charle", 151);
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat d("Didier", 1);
        std::cout << d << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    try{
        Bureaucrat e("Emilien", 150);
        std::cout << e << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }
    return 0;
}
