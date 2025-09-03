/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aAform.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:36:59 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/02 16:47:28 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aform.hpp"
#include "bureaucrat.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150)
        throw GradeTooLowException();
    if (gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToExecute > 150)
        throw GradeTooLowException();
    std::cout << "un Aformulaire est cree !\n";   
}

AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){
    std::cout << "copy constructor appeler\n";
    *this = other;
}

AForm& AForm::operator=(const AForm& other){
    std::cout << "assignement operator appeler\n";
    if (this != &other) {
        this->isSigned = other.isSigned;
    }
    return (*this);
}

AForm::~AForm(){
    std::cout << "destructor appeler\n";
}

void AForm::beSigned(Bureaucrat& b) {
    if (b.GetGrade() > this->gradeToSign) {
        throw GradeTooLowException();
    }
    this->isSigned = true;
}

const std::string& AForm::getName() const{
    return (name);
}

int AForm::getGradeToExecute() const{
    return (gradeToExecute);
}

bool AForm::getIsSigned() const{
    return(isSigned);
}

int AForm::getGradeToSign() const{
    return (gradeToSign);
}

std::ostream& operator<<(std::ostream& os, const AForm& b) {
    os << b.getName() << ", AFormulaire de grade " << b.getGradeToSign() << " pour etre signer, et de grade " << b.getGradeToExecute() << " pour etre executer.\n";
    return os;
}

const char* AForm::GradeTooHighException::what() const throw(){
    return "grade trop élevé";
}

const char* AForm::GradeTooLowException::what()  const throw(){
    return "grade trop bas";
}
