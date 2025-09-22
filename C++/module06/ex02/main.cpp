/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:58:43 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/22 14:57:35 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main() {

    for (int i = 0; i < 4; i++){
        Base *P = generate();
        identify(P);
        identify(*P);
        std::cout << std::endl;
        delete (P);
    }
    return (0);
}
