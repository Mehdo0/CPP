/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:50:09 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/12 14:58:10 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavtrap.hpp"
#include "fragtrap.hpp"

int main() {
    Scavtrap serena("Serena");
    Fragtrap jawed("Jawed");
    serena.attack("un méchant robot");
    serena.guardgate();
    jawed.high_fives();
    return 0;
}
