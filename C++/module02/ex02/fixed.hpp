/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:07:37 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/12 14:42:19 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();                               // Constructeur par défaut
    Fixed(const int intValue);             // Constructeur avec int
    Fixed(const float floatValue);         // Constructeur avec float
    Fixed(const Fixed& other);             // Constructeur de copie
    Fixed& operator=(const Fixed& other);  // Opérateur d’affectation
    ~Fixed();                              // Destructeur

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;

    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();    // pré-incrément
    Fixed operator++(int);  // post-incrément
    Fixed& operator--();    // pré-décrément
    Fixed operator--(int);  // post-décrément
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


#endif
