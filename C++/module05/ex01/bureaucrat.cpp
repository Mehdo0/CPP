/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:03:58 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/02 09:45:59 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){

    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Un bureaucrat est apparu !\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other){
    std::cout << "copy constructor appeler\n";
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    std::cout << "assignement operator appeler\n";
    if (this != &other) {
        this->grade = other.grade;
    }
    return (*this);    
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.GetName() << ", bureaucrat(e) de grade " << b.GetGrade();
    return os;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "destructor appeler\n";
}

int Bureaucrat::GetGrade() const{
    return (grade);
}

const std::string Bureaucrat::GetName() const{
    return (name);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade trop élevé (< 1)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade trop bas (> 150)";
}

void Bureaucrat::signForm(Form& f) {
    try {
        f.beSigned(*this);
        std::cout << name << " signed " << f.GetName() << "\n";
    }
    catch (const std::exception& e) {
        std::cout << name << " couldn’t sign " << f.GetName()
                  << " because " << e.what() << "\n";
    }
}