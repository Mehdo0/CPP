/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:21:12 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/03 11:02:29 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "aform.hpp"
#include "Shrubbery.hpp"
#include "Robotomy.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& other){
    (void)other;
}

Intern& Intern::operator=(const Intern& other){
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm*   Intern::makeForm(std::string name, std::string target){
    const std::string forms[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    int idx = -1;
    for (int i = 0; i < 3; ++i) {
        if (forms[i] == name) { idx = i; break; }
    }
    if (idx == -1) {
        std::cout << "Intern: form inconnu \"" << name << "\"" << std::endl;
        return 0;
    }

    std::cout << "Intern creates " << name << std::endl;
    switch (idx) {
        case 0: return new PresidentialPardonForm(target);
        case 1: return new RobotomyRequestForm(target);
        case 2: return new ShrubberyCreationForm(target);
    }
    return 0;
}
