/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:04:19 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/10 14:46:00 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"


int main() {
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("RANDOM"); // test cas par défaut
    return 0;
}
