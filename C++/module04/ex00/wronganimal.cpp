/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:12:56 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/03 14:14:23 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Wronganimal::Wronganimal() : type("Wronganimal") {std::cout << "A new Wronganimal is born !" << std::endl;}
Wronganimal::~Wronganimal() {std::cout << "An Wronganimal is dead !" << std::endl;}
void Wronganimal::makeSound() const {
    std::cout << "The Wronganimal makes a sound\n";
}
std::string Wronganimal::getType() const {
    return type;
}