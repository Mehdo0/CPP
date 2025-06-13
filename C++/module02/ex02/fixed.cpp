/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:12:01 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/12 14:42:25 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <cmath> // pour roundf()

// Constructeur par défaut
Fixed::Fixed() : _value(0) {}

// Constructeur entier -> virgule fixe
Fixed::Fixed(const int intValue) {
    _value = intValue << _fractionalBits;
}

// Constructeur flottant -> virgule fixe
Fixed::Fixed(const float floatValue) {
    _value = roundf(floatValue * (1 << _fractionalBits));
}

// Constructeur de copie
Fixed::Fixed(const Fixed& other) {
    _value = other._value;
}

// Opérateur d'affectation
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        _value = other._value;
    }
    return *this;
}

// Destructeur
Fixed::~Fixed() {}

// Accesseurs
int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
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

bool Fixed::operator>(const Fixed& other) const {
    return this->_value > other._value;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->_value != other._value;
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other._value == 0) {
        std::cerr << "Erreur : division par zéro !" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

// Pré-incrément
Fixed& Fixed::operator++() {
    ++_value;
    return *this;
}

// Post-incrément
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++_value;
    return temp;
}

// Pré-décrément
Fixed& Fixed::operator--() {
    --_value;
    return *this;
}

// Post-décrément
Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --_value;
    return temp;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}
