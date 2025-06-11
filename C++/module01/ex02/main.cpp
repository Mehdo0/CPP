/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:19:26 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/09 16:07:17 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string string =  "HI THIS IS BRAIN"; //Elle contient la chaîne de caractères "HI THIS IS BRAIN"
    std::string *stringPTR = &string; //stringPTR contient l’adresse de string
    std::string &stringREF = string; //&stringREF donne la même adresse que &string
    
    std::cout <<  "The memory address of the string variable : " << &string << std::endl;
    std::cout <<  "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout <<  "The memory address held by stringREF : " << &stringREF << std::endl;
    std::cout <<  "The value of the string variable : " << string << std::endl;
    std::cout <<  "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout <<  "The value pointed to by stringREF : " << stringREF << std::endl;
}