/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:50:20 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/12 14:50:55 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class Claptrap{
  protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
    
  public:
    Claptrap(std::string name);
    Claptrap(const Claptrap& other);
    Claptrap& operator=(const Claptrap& other);
    ~Claptrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif