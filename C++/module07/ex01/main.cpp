/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:10:19 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/01 19:05:54 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

void printStr(const std::string &str) {
    std::cout << str;
}

void tupper(const std::string &str){
    for (int i = 0; str[i]; i++)
        std::cout << static_cast<char>(toupper(str[i]));
}

int main() {
    std::string array[5] = {"Hello", " tu", " vas", " bien", " ?\n"};
    Iter(array, 5, printStr);
    Iter(array, 5, tupper);

    return 0;
}