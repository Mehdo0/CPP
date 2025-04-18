/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:48:20 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/04 16:59:37 by mmouaffa         ###   ########.fr       */
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
