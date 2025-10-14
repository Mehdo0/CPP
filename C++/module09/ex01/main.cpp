/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:49:27 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/13 10:42:08 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"
#include <stdexcept>

int main(int ac, char **av){
    if (ac != 2)
    {
        
    }
        return (1);
    try{
        int result = resolve(av[1]);
        std::cout << result << std::endl;
    } catch (const char &e){
        std::cerr << "Error\n"; 
        return (-1);
    }
    return (0);
    
}