/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:00:31 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/03 17:02:22 by mmouaffa         ###   ########.fr       */
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
    void displayAllContacts();
    int getindex();
};

#endif
