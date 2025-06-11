/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:48:16 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/09 15:57:59 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main() {
    Zombie* z = newZombie("Jean-Cerveau");
    z->announce();
    delete z;

    Zombie* horde = zombieHorde(5, "Bob");

    delete[] horde;

    randomChump("Zombinette");

    return 0;
}
