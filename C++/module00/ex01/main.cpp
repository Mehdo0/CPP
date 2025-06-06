/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:51:42 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/06 16:37:16 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.hpp"
#include "phonebook.hpp"

void displayMenu()
{
    std::cout << "  - ADD    : Ajouter un contact" << std::endl;
    std::cout << "  - SEARCH : Afficher les contacts" << std::endl;
    std::cout << "  - EXIT   : Quitter l'application" << std::endl;
    std::cout << "Entrez une commande : ";
}

int main() {
    Phonebook phonebook;
    std::string command;

    while (true)
    {
        displayMenu();
        std::getline(std::cin, command);

        if (command == "a" || command == "add" || command == "ADD" || command == "A")
            phonebook.AddContact();
        else if (command == "s" || command == "search" || command == "SEARCH" || command == "S")
        {
            if (phonebook.getindex() >= 0)
                std::cout << "|     index|first_name| last_name|    number|" << std::endl;
            phonebook.displayAllContacts();
            std::cout << "Quel contact voulez-vous voir ? Entrez l'index : ";
            std::string input;
            std::getline(std::cin, input);
            int index = stoi(input);
            if (index >= 0 && index < 8 && phonebook.getindex() > index)
                phonebook.display_bis(index);
            else
                std::cout << "Index hors limites. Aucun contact à cet index." << std::endl;
        } 
        else if (command == "e" || command == "exit" || command == "EXIT" || command == "E")
        {
            std::cout << "Au revoir ! Les contacts sont perdus à jamais !\n";
            break;
        } 
        else
            std::cout << "Commande inconnue. Essayez encore." << std::endl;
    }
    return (0);
}