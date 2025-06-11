/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:50:09 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/21 17:13:52 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavtrap.hpp"

int main() {
    std::cout << "=== Création du robot ===" << std::endl;
    Scavtrap serena("Serena");

    std::cout << "\n=== Attaque d'une cible ===" << std::endl;
    serena.attack("un méchant robot");

    std::cout << "\n=== Activation du mode Gardien ===" << std::endl;
    serena.guardgate();

    std::cout << "\n=== Fin du programme ===" << std::endl;
    return 0;
}
