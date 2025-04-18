/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:48:20 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/09 11:16:26 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie() : nom("") {}

void Zombie::set_name(std::string name) {
    nom = name;
}

void Zombie::announce() {
    std::cout << nom << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].set_name(name);
        std::cout << "Zombie numéro " << i + 1 << " est créé !" << std::endl;
        horde[i].announce();
    }
    return horde;
}
