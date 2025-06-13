/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:19:25 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/12 23:19:26 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal() : type("Animal") {}
Animal::~Animal() {}
void Animal::makeSound() const {
    std::cout << "The animal makes a sound\n";
}
std::string Animal::getType() const {
    return type;
}