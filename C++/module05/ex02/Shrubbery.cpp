/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shrubbery.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:55:44 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/03 09:40:49 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Shrubbery.hpp"
#include "bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
: AForm(other), target(other.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned())
        throw AForm::GradeTooLowException();
    if (executor.GetGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::ofstream ofs((this->target + "_shrubbery").c_str());
    if (!ofs)
        throw std::runtime_error("Impossible d’ouvrir le fichier");
    ofs << "       _-_\n";
    ofs << "    /~~   ~~\\\n";
    ofs << " /~~         ~~\\\n";
    ofs << "{               }\n";
    ofs << " \\  _-     -_  /\n";
    ofs << "   ~  \\\\ //  ~\n";
    ofs << "_- -   | | _- _\n";
    ofs << "  _ -  | |   -_\n";
    ofs << "      // \\\\\n";
    ofs.close();
}
