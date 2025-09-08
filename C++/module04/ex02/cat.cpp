/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:04:24 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/08 10:42:16 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "A Cat is born!\n";
}

Cat::Cat(const Cat& other) : AAnimal(other) {
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignment operator called\n";
    if (this != &other) {
        AAnimal::operator=(other);
    }
    return *this;
}

Cat::~Cat() {std::cout << "An cat is dead !" << std::endl;}
void Cat::makeSound() const {
    std::cout << "MIAOU 🐈\n";
}
std::string Cat::getType() const {
    return type;
}