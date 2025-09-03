/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:36:59 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/02 09:57:56 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"
#include "bureaucrat.hpp"

Form::Form(std::string name, int GSign, int GEx) : name(name), IsSigned(false), GSign(GSign), GEx(GEx)
{
    if (GSign < 1)
        throw GradeTooHighException();
    if (GSign > 150)
        throw GradeTooLowException();
    if (GEx < 1)
        throw GradeTooHighException();
    if (GEx > 150)
        throw GradeTooLowException();
    std::cout << "un formulaire est cree !\n";   
}

Form::Form(const Form& other) : name(other.name), IsSigned(other.IsSigned), GSign(other.GSign), GEx(other.GEx){
    std::cout << "copy constructor appeler\n";
    *this = other;
}

Form& Form::operator=(const Form& other){
    std::cout << "assignement operator appeler\n";
    if (this != &other) {
        this->IsSigned = other.IsSigned;
    }
    return (*this);
}

Form::~Form(){
    std::cout << "destructor appeler\n";
}

int Form::beSigned(Bureaucrat& b) {
    if (b.GetGrade() > this->GSign) {
        throw GradeTooLowException();
    }
    this->IsSigned = true;
    return 1;
}

const std::string Form::GetName() const{
    return (name);
}

int Form::GetGEx() const{
    return (GEx);
}

int Form::GetGSign() const{
    return (GSign);
}

std::ostream& operator<<(std::ostream& os, const Form& b) {
    os << b.GetName() << ", Formulaire de grade " << b.GetGSign() << " pour etre signer, et de grade " << b.GetGEx() << " pour etre executer.\n";
    return os;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "grade trop élevé";
}

const char* Form::GradeTooLowException::what()  const throw(){
    return "grade trop bas";
}
