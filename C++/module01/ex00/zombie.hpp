/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:49:52 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/09 15:56:03 by mehdi            ###   ########.fr       */
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
    Zombie();
    void set_name(std::string name);
    void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
