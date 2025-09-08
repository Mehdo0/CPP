/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:01:03 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/08 10:42:31 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal(const AAnimal& other) {
    std::cout << "AAnimal copy constructor called\n";
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    std::cout << "AAnimal assignment operator called\n";
    type = other.type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called\n";
}

void AAnimal::makeSound() const {
    std::cout << "Generic Aanimal sound\n";
}

std::string AAnimal::getType() const {
    return type;
}
