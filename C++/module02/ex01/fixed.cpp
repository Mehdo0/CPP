/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:12:01 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/12 14:34:48 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <cmath> // pour roundf()

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int intValue) {
    std::cout << "Int constructor called\n";
    _value = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue) {
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
    this->_value = raw;
}

// Conversion vers float
float Fixed::toFloat(void) const {
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

// Surcharge de l’opérateur <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}