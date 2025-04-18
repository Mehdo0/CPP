/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:48:16 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/09 11:16:44 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main() {
    Zombie* z = newZombie("Jean-Cerveau");
    z->announce();
    delete z;

    Zombie* horde = zombieHorde(5, "Bob");

    delete[] horde; // nettoyage propre après usage

    randomChump("Zombinette");

    return 0;
}
