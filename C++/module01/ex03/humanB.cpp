/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:55:02 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/09 13:43:19 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"


HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void    HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->get_type() << '\n';
    else
        std::cout << name << " has no weapon to attack with!\n";
}

void    HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}