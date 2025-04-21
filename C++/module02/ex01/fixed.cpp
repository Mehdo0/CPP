/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:12:01 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/18 13:46:23 by mmouaffa         ###   ########.fr       */
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