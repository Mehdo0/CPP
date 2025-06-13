/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:04:24 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/12 23:19:20 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "A Cat is born!\n";
}
Cat::~Cat() {}
void Cat::makeSound() const {
    std::cout << "MIAOU 🐈\n";
}
std::string Cat::getType() const {
    return type;
}