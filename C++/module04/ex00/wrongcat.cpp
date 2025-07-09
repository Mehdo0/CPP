/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:13:04 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/03 14:14:30 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "wrongcat.hpp"

Wrongcat::Wrongcat() {
    type = "Wrongcat";
    std::cout << "A Wrongcat is born!\n";
}
Wrongcat::~Wrongcat() {std::cout << "An Wrongcat is dead !" << std::endl;}
void Wrongcat::makeSound() const {
    std::cout << "fake MIAOU 🐈\n";
}
std::string Wrongcat::getType() const {
    return type;
}