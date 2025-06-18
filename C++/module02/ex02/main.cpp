/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:11:46 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/18 14:05:31 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    // Additional tests
    Fixed c(10);
    Fixed d(3.5f);
    Fixed e = c + d;
    Fixed f = c - d;
    Fixed g = c * d;
    Fixed h = c / d;

    std::cout << "c: " << c << ", d: " << d << std::endl;
    std::cout << "c + d: " << e << std::endl;
    std::cout << "c - d: " << f << std::endl;
    std::cout << "c * d: " << g << std::endl;
    std::cout << "c / d: " << h << std::endl;

    std::cout << "Comparisons:" << std::endl;
    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c >= d: " << (c >= d) << std::endl;
    std::cout << "c <= d: " << (c <= d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;

    return 0;
}