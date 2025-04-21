/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:50:09 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/18 14:54:35 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "claptrap.hpp"

int main() {
    Claptrap clap1("Dracofeu");
    clap1.attack("target1");
    clap1.takeDamage(3);
    clap1.beRepaired(5);
    clap1.takeDamage(15);
    clap1.attack("target2");
    clap1.beRepaired(2);

    Claptrap clap2 = clap1; // test du constructeur de copie
    clap2.attack("target3");

    return 0;
}
