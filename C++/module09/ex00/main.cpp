/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:19:03 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/13 09:16:43 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"
#include <stdexcept>

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cerr << "Error: could not open file.\n";
        return (1);
    }
    bitcoin btc;
    try{
        btc.read_DB(av[1], '|');
    }catch (const char *e){
        std::cerr << "Error: " << e;
    }
    btc.read_DB("data.csv", ',');
    //btc.display_DB_Input();
    //btc.display_DB_CSV();
    btc.calculate();
    btc.display_result();
}