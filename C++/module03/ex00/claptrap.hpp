/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:32:50 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/18 14:52:46 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class Claptrap{

  private:
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