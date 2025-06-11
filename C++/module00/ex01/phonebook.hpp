/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:43:34 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/11 15:43:36 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook {
private:
    Contact contact[8];
    int index;
    int compteur;

public:
    Phonebook();
    
    void displayAllContacts();
    void AddContact();
    void display(int index) const;
    void display_bis(int index) const;
    int getindex();
};

#endif