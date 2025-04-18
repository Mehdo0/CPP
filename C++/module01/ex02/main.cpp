/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:19:26 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/09 11:26:53 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string string =  "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout <<  "The memory address of the string variable : " << &string << '\n';
    std::cout <<  "The memory address held by stringPTR : " << stringPTR << '\n';
    std::cout <<  "The memory address held by stringREF : " << &stringREF << '\n';
    std::cout <<  "The value of the string variable : " << string << '\n';
    std::cout <<  "The value pointed to by stringPTR : " << *stringPTR << '\n';
    std::cout <<  "The value pointed to by stringREF : " << stringREF << '\n';
}