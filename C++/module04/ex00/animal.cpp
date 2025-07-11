/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:19:25 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/09 11:08:58 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal() : type("Animal") {std::cout << "A new animal is born !" << std::endl;}
Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor called\n";
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assignment operator called\n";
    type = other.type;
    return *this;
}
Animal::~Animal() {std::cout << "An animal is dead !" << std::endl;}
void Animal::makeSound() const {
    std::cout << "The animal makes a sound\n";
}
std::string Animal::getType() const {
    return type;
}