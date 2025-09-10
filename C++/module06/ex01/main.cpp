/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 18:59:24 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/09/09 15:48:21 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"
#include "data.hpp"   // your Data class

int main() {
    Data d;

    std::cout << "Original Data address: " << &d << "\n";
    uintptr_t raw = Serializer::serialize(&d);
    std::cout << "Serialized integer value: " << raw << "\n";
    Data* ptr = Serializer::deserialize(raw);
    std::cout << "Deserialized Data address: " << ptr << "\n";
    if (ptr == &d) {
        std::cout << "Success: deserialized pointer matches the original!\n";
    } else {
        std::cout << "Error: mismatch!\n";
    }

    return 0;
}
