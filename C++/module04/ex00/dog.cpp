/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:02:44 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/12 23:19:16 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "A Dog is born!\n";
}
Dog::~Dog() {}
void Dog::makeSound() const {
    std::cout << "WOUF 🐕\n";
}
std::string Dog::getType() const {
    return type;
}

