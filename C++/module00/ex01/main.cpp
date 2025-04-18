/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:51:42 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/04 14:09:11 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.hpp"
#include "phonebook.hpp"

void displayMenu() {
    std::cout << "\n=======================" << std::endl;
    std::cout << "📞  PHONEBOOK 3000  📞" << std::endl;
    std::cout << "=======================" << std::endl;
    std::cout << "COMMANDES DISPONIBLES :" << std::endl;
    std::cout << "  - ADD    : Ajouter un contact" << std::endl;
    std::cout << "  - SEARCH : Afficher les contacts" << std::endl;
    std::cout << "  - EXIT   : Quitter l'application" << std::endl;
    std::cout << "=======================" << std::endl;
}

int main() {
    Phonebook phonebook;
    std::string command;

    while (true) {
        displayMenu();
        std::cout << "💡 Entrez une commande : ";
        std::getline(std::cin, command);

        if (command == "a" || command == "add" || command == "ADD" || command == "A") {
            phonebook.AddContact();
        } 
        else if (command == "s" || command == "search" || command == "SEARCH" || command == "S") {
            if (phonebook.getindex() > 0)
                std::cout << "|     index|first_name| last_name|    number|" << std::endl;
            phonebook.displayAllContacts();
            std::cout << "💡 Quel contact voulez-vous voir ? Entrez l'index : ";
            int index = 0;
            std::string input;
            std::getline(std::cin, input);

            // Vérification de l'entrée pour convertir en entier
            try {
                index = std::stoi(input);
            } catch (const std::invalid_argument& e) {
                std::cout << "❌ L'index que vous avez entré est invalide." << std::endl;
                continue;
            }

            // Vérifie si l'index est valide
            if (index >= 0 && index < 8 && phonebook.getindex() >= index) {
                phonebook.display(index);  // Appel à la méthode de la classe Phonebook
            } else {
                std::cout << "❌ Index hors limites. Aucun contact à cet index." << std::endl;
            }

        } 
        else if (command == "e" || command == "exit" || command == "EXIT" || command == "E") {
            std::cout << "👋 Au revoir ! Les contacts sont perdus à jamais !\n";
            break;
        } 
        else {
            std::cout << "❌ Commande inconnue. Essayez encore." << std::endl;
        }
    }

    return 0;
}