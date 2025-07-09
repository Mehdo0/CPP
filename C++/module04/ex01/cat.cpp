/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:04:24 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/09 11:05:07 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "A Cat is born!\n";
    brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called\n";
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignment operator called\n";
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {delete brain; std::cout << "An cat is dead !" << std::endl;}
void Cat::makeSound() const {
    std::cout << "MIAOU 🐈\n";
}
std::string Cat::getType() const {
    return type;
}