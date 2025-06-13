/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:18:41 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/12 14:58:49 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fragtrap.hpp"

Fragtrap::Fragtrap(std::string name) : Claptrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "Fragtrap " << this->name << " has been created!" << std::endl;
}

Fragtrap::~Fragtrap(){
    std::cout << "Fragtrap " << this->name << " has been destroyed!" << std::endl;

}

void    Fragtrap::high_fives(void){
    std::cout << this->name << " vous propose un high five" <<std::endl;
}