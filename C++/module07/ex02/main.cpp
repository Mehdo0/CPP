/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:37:48 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/02 19:18:31 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main(){
    Array<char> arr(5);
    Array<char> arr_bis(arr);
    for (unsigned int i = 0; i < arr.Size(); i++){
        arr[i] = 'A' + i;
    }
    for (unsigned int i = 0; arr[i]; i++){
        std::cout << "arr[" << i << "] = " << (arr[i]);
        std::cout << " arr_bis[" << i << "] = " << static_cast<int>(arr_bis[i]) << std::endl;
    }
    arr_bis = arr;
    std::cout << "---Apres avoir copier *ARR* dans *ARR_BIS*---\n";
    for (unsigned int i = 0; arr[i]; i++){
        std::cout << " arr_bis[" << i << "] = " <<(arr_bis[i]) << std::endl;
    }
    return (0);
}