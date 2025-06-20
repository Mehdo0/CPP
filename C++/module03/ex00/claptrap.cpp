/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:44:23 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/20 10:17:08 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "claptrap.hpp"

Claptrap::Claptrap(std::string name)
    : name(name), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

Claptrap::Claptrap(const Claptrap& other) {
    *this = other;
    std::cout << "ClapTrap " << this->name << " has been copied!" << std::endl;
}

Claptrap& Claptrap::operator=(const Claptrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    std::cout << "ClapTrap " << this->name << " has been assigned!" << std::endl;
    return *this;
}

Claptrap::~Claptrap() {
    std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
}

void Claptrap::attack(const std::string& target) {
    if (hit_points <= 0 || energy_points <= 0) {
        std::cout << "ClapTrap " << name << " cannot attack. Not enough hit or energy points." << std::endl;
        return;
    }
    energy_points--;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount) {
    if (hit_points <= 0) {
        std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
        return;
    }

    hit_points -= amount;
    if (hit_points < 0) hit_points = 0;

    std::cout << "ClapTrap " << name << " took " << amount
              << " points of damage! Remaining HP: " << hit_points << std::endl;
}

void Claptrap::beRepaired(unsigned int amount) {
    if (hit_points <= 0 || energy_points <= 0) {
        std::cout << "ClapTrap " << name << " cannot repair. Not enough hit or energy points." << std::endl;
        return;
    }
    hit_points += amount;
    energy_points--;

    std::cout << "ClapTrap " << name << " repairs itself for "
              << amount << " points! New HP: " << hit_points << std::endl;
}
