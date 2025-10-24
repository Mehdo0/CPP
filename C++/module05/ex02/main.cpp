/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:03:50 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/19 15:18:00 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "bureaucrat.hpp"
#include "Shrubbery.hpp"
#include "Robotomy.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        std::cout << "=== Shrubbery ===" << std::endl;
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm sform("garden");
        boss.signForm(sform);
        boss.executeForm(sform);
    }
    catch (const std::exception& e) {
        std::cout << "Exception Shrubbery: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Robotomy ===" << std::endl;
        Bureaucrat doc("Doc", 1);
        RobotomyRequestForm rform("Bender");
        doc.signForm(rform);
        for (int i = 0; i < 5; i++) {
            doc.executeForm(rform);
        }
    }
    catch (const std::exception& e) {
        std::cout << "Exception Robotomy: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Presidential Pardon ===" << std::endl;
        Bureaucrat prez("Prez", 1);
        PresidentialPardonForm pform("Arthur Dent");
        prez.signForm(pform);
        prez.executeForm(pform);
    }
    catch (const std::exception& e) {
        std::cout << "Exception Presidential: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n=== Test échoué (grade trop bas) ===" << std::endl;
        Bureaucrat intern("Intern", 150);
        ShrubberyCreationForm failForm("office");
        intern.signForm(failForm);
        intern.executeForm(failForm);
    }
    catch (const std::exception& e) {
        std::cout << "Exception attendue: " << e.what() << std::endl;
    }

    return 0;
}
