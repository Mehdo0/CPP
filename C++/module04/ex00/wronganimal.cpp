/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:12:56 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/18 14:14:52 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Wronganimal::Wronganimal() : type("Wronganimal") {}
Wronganimal::~Wronganimal() {}
void Wronganimal::makeSound() const {
    std::cout << "The Wronganimal makes a sound\n";
}
std::string Wronganimal::getType() const {
    return type;
}