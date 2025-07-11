/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:02:44 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/09 11:12:29 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "A Dog is born!\n";
}
Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator called\n";
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}
Dog::~Dog() {std::cout << "An dog is dead !" << std::endl;}
void Dog::makeSound() const {
    std::cout << "WOUF 🐕\n";
}
std::string Dog::getType() const {
    return type;
}

