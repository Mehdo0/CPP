/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:55:41 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/06 16:38:32 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.hpp"
#include "phonebook.hpp"

Phonebook::Phonebook() : index(0), compteur(0) {}

void Phonebook::displayAllContacts()
{
    if (compteur == 0)
    {
        std::cout << "Le répertoire est vide." << std::endl;
        return ;
    }
    for (int i = 0; i < compteur; i++)
    {
        contact[i].displaycontact(i);
    }
}

void Phonebook::AddContact()
{
    Contact c;
    c.setcontact();
    contact[index] = c;
    index = (index + 1) % 8;
    if (compteur < 8)
    {
        compteur++;
    }
}

void    Phonebook::display(int index) const
{
    Contact c = contact[index];
    std::cout << "          ";
    std::cout << index;
    std::cout << "|";
    if (c.get_firstname().length() <= 10)
    {
        for (long unsigned int i = 0; i < 10 - c.get_firstname().length(); i++)
            std::cout << " ";
        std::cout << c.get_firstname();   
    }
    if (c.get_firstname().length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << c.get_firstname()[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (c.get_lastname().length() <= 10)
    {
        for (long unsigned int i = 0; i < 10 - c.get_lastname().length(); i++)
            std::cout << " ";
        std::cout << c.get_lastname();   
    }
    if (c.get_lastname().length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << c.get_lastname()[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (c.get_surname().length() <= 10)
    {
        for (long unsigned int i = 0; i < 10 - c.get_surname().length(); i++)
            std::cout << " ";
        std::cout << c.get_surname();   
    }
    if (c.get_surname().length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << c.get_surname()[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (c.get_number().length() <= 10)
    {
        for (long unsigned int i = 0; i < 10 - c.get_number().length(); i++)
            std::cout << " ";
        std::cout << c.get_number();   
    }
    if (c.get_number().length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << c.get_number()[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (c.get_darkestsecret().length() <= 10)
    {
        for (long unsigned int i = 0; i < 10 - c.get_darkestsecret().length(); i++)
            std::cout << " ";
        std::cout << c.get_darkestsecret();   
    }
    if (c.get_darkestsecret().length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << c.get_darkestsecret()[i];
        std::cout << ".";
    }
    std::cout << "|" << std::endl;
}

void    Phonebook::display_bis(int index) const
{
    Contact c = contact[index];
    c.display__contact();
}

int Phonebook::getindex()
{
    return (index);
}