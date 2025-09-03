/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:38:56 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/02 09:55:23 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "bureaucrat.hpp"
#include <string>
#include <exception>

class Bureaucrat;

class Form{
    private:
    const std::string name;
    bool IsSigned;
    const int GSign;
    const int GEx;

    public:
    Form(std::string name, int GSign, int GEx);
    Form(const Form& other);
    Form& operator=(const Form& other);
    friend std::ostream& operator<<(std::ostream& os, const Form& b);
    ~Form();
    const std::string GetName() const;
    int GetGSign() const;
    int GetGEx() const;
    int beSigned(Bureaucrat& b);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

#endif