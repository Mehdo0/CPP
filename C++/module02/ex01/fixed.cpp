/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:12:01 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/18 14:00:46 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int intValue) { // On stock une valeure entiere sous puissance de 2 afin de faciliter les calculs
    std::cout << "Int constructor called\n";
    _value = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue) { // On simule un nombre à virgule en utilisant un entier
    std::cout << "Float constructor called\n";
    _value = roundf(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called\n";
    std::cout << "Copy assignment operator called\n";
    _value = other._value;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        _value = other._value;
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
    std::cout <<"setRawBits member function called" <<std::endl;
    this->_value = raw;
}

float Fixed::toFloat(void) const {
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}