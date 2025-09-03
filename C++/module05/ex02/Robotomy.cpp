/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Robotomy.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:00:15 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/03 10:12:37 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Robotomy.hpp"
#include "bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
: AForm(other), target(other.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned())
        throw AForm::GradeTooLowException();
    if (executor.GetGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::cout << "* BZZZZZZZ... Drrrrrrrr... *\n";
    static bool seeded = false;
    if (!seeded) { std::srand((unsigned int)std::time(0)); seeded = true; }

    if (std::rand() % 2)
        std::cout << this->getName() << ": " << target << " a été robotomisé avec succès !\n";
    else
        std::cout << this->getName() << ": la robotomisation de " << target << " a échoué.\n";
}
