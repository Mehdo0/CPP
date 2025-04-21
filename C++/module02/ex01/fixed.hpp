/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:07:37 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/18 13:18:46 by mmouaffa         ###   ########.fr       */
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
};

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
