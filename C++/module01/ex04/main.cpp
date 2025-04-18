/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:45:47 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/09 14:21:15 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac,char **av)
{
    if (ac != 4)
    {
        std::cout << "Error\nil faut trois arguments !\n";
        return (1);
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    char    *filename = av[1];
    std::ifstream File(filename);
    if (File.fail())
    {
        std::cout << "Error\nle fichiers ne peut pas etre ouvert !\n";
        return (1);
    }
    std::string OutFileName = std::string(av[1]) + ".replace";
    std::ofstream outfile(OutFileName);
    std::string str;
    bool replace = false;


    while (std::getline(File, str)) {
        std::string NewLine;
        size_t pos = 0;
        size_t found;

        while ((found = str.find(s1, pos)) != std::string::npos)
        {
            NewLine += str.substr(pos, found - pos);
            NewLine += s2;
            pos = found + s1.length();
        }
        NewLine += str.substr(pos);
        outfile << NewLine << std::endl;
    }
    return (0);
}