/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:12:01 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/12 14:23:13 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called\n";
    this->_value = other._value;
    std::cout <<"getRawBits member function called" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        this->_value = other._value;
    std::cout <<"getRawBits member function called" <<std::endl;
    return *this;
}


Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void)const {
    std::cout <<"getRawBits member function called" <<std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw){
    this->_value = raw;
}