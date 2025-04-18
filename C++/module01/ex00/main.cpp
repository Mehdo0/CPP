/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:48:16 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/04 17:00:39 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main() {
    Zombie* z = newZombie("Jean-Cerveau");
    z->announce();
    delete z;

    randomChump("Zombinette");

    return 0;
}
