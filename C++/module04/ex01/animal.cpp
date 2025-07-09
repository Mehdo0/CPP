/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:01:03 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/09 11:01:07 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor called\n";
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assignment operator called\n";
    type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const {
    std::cout << "Generic animal sound\n";
}

std::string Animal::getType() const {
    return type;
}
