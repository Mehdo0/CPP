/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:01:47 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/09 11:01:56 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main() {
    const int SIZE = 4;
    Animal* animals[SIZE];

    // Remplissage
    for (int i = 0; i < SIZE; ++i) {
        if (i < SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Cleaning up ---\n";

    for (int i = 0; i < SIZE; ++i) {
        delete animals[i]; // Appelle bien les bons destructeurs grâce au polymorphisme
    }

    return 0;
}
