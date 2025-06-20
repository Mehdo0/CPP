/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:13:04 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/18 14:13:55 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Wrongcat::Wrongcat() {
    type = "Wrongcat";
    std::cout << "A Wrongcat is born!\n";
}
Wrongcat::~Wrongcat() {}
void Wrongcat::makeSound() const {
    std::cout << "MIAOU 🐈\n";
}
std::string Wrongcat::getType() const {
    return type;
}