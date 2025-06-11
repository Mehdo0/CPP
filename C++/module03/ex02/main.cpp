/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:50:09 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/21 17:23:07 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavtrap.hpp"
#include "fragtrap.hpp"

int main() {
    std::cout << "=== Création des robot ===" << std::endl;
    Scavtrap serena("Serena");
    Fragtrap jawed("Jawed");

    std::cout << "\n=== Attaque d'une cible ===" << std::endl;
    serena.attack("un méchant robot");

    std::cout << "\n=== Activation du mode Gardien ===" << std::endl;
    serena.guardgate();

    std::cout << "\n=== proposition de check ===" << std::endl;
    jawed.high_fives();
    
    std::cout << "\n=== Fin du programme ===" << std::endl;
    return 0;
}
