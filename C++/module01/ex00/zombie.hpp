/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:49:52 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/04 16:59:50 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string nom;

public:
    Zombie(); // constructeur par défaut
    void set_name(std::string name);
    void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
