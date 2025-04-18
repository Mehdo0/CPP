/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:53:41 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/04 14:05:14 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact() : first_name(""), last_name(""), surname(""), number(""), darkest_secret("") {}


void Contact::setcontact() {
    std::cout << "Entrez le prénom : ";
    std::getline(std::cin, first_name);
    while (first_name.empty()) {
        std::cout << "❌ Le prénom ne peut pas être vide ! Réessayez : ";
        std::getline(std::cin, first_name);
    }

    std::cout << "Entrez le nom : ";
    std::getline(std::cin, last_name);
    while (last_name.empty()) {
        std::cout << "❌ Le nom ne peut pas être vide ! Réessayez : ";
        std::getline(std::cin, last_name);
    }

    std::cout << "Entrez le surnom : ";
    std::getline(std::cin, surname);
    while (surname.empty()) {
        std::cout << "❌ Le surnom ne peut pas être vide ! Réessayez : ";
        std::getline(std::cin, surname);
    }
    bool is_valid = false;

    while (!is_valid)
    {
        std::cout << "Entrez le numéro de téléphone : ";
        std::getline(std::cin, number);
        while (number.empty()) {
            std::cout << "❌ Le numéro ne peut pas être vide ! Réessayez : ";
            std::getline(std::cin, number);
        }
        is_valid = true;
        for (long unsigned int i = 0; i < number.length(); i++)
        {
            if (!isdigit(number[i]))
            {
                is_valid = false;
                break ;
            }
        }
        if (!is_valid)
            std::cout << "❌ Le numéro de téléphone doit être composé uniquement de chiffres !" << std::endl;
    }

    std::cout << "Entrez le secret le plus sombre : ";
    std::getline(std::cin, darkest_secret);
    while (darkest_secret.empty()) {
        std::cout << "❌ Le secret ne peut pas être vide ! Réessayez : ";
        std::getline(std::cin, darkest_secret);
    }
}

void    Contact::displaycontact(int index) const
{
    std::cout << "|         ";
    std::cout << index;
    std::cout << "|";
    if (first_name.length() <= 10)
    {
        for (long unsigned int i = 0; i < (10 - first_name.length()); i++)
            std::cout << " ";
        std::cout << first_name;   
    }
    if (first_name.length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << first_name[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (last_name.length() <= 10)
    {
        for (long unsigned int i = 0; i < (10 - last_name.length()); i++)
            std::cout << " ";
        std::cout << last_name;   
    }
    if (last_name.length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << last_name[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (number.length() <= 10)
    {
        for (long unsigned int i = 0; i < (10 - number.length()); i++)
            std::cout << " ";
        std::cout << number;   
    }
    if (number.length() > 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << number[i];
        std::cout << ".";
    }
    std::cout << "|" << std::endl;

}

std::string Contact::get_firstname()
{
    return (first_name);
}

std::string Contact::get_lastname()
{
    return (last_name);
}

std::string Contact::get_surname()
{
    return (surname);
}

std::string Contact::get_number()
{
    return (number);
}

std::string Contact::get_darkestsecret()
{
    return (darkest_secret);
}