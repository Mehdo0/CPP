/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:39:05 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/20 10:19:05 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavtrap.hpp"

Scavtrap::Scavtrap(std::string name) : Claptrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "Scavtrap " << this->name << " has been created!" << std::endl;
}

Scavtrap::~Scavtrap(){
    std::cout << "Scavtrap " << this->name << " has been destroyed!" << std::endl;

}

void Scavtrap::attack(const std::string& target) {
    std::cout << "Scavtrap " << name << " attacks " << target 
              << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void Scavtrap::guardgate() {
    std::cout << "Scavtrap " << name << " has entered Gate keeper mode." << std::endl;
}
