/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:00:31 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/06 16:37:35 by mehdi            ###   ########.fr       */
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
    void AddContact();
    void display(int index) const;
    void display_bis(int index) const;
    void displayAllContacts();
    int getindex();
};

#endif
