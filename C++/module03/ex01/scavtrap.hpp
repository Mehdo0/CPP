/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:C++/module03/ex01/scavtrap.hpp
/*   Created: 2025/04/21 15:22:58 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/21 15:38:56 by mmouaffa         ###   ########.fr       */
=======
/*   Created: 2025/04/03 14:00:31 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/06 16:37:35 by mehdi            ###   ########.fr       */
>>>>>>> 5fbf4e4f56aa1c3fdb5f5e2d3ee1197e96bf3b0b:C++/module00/ex01/phonebook.hpp
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "claptrap.hpp"

<<<<<<< HEAD:C++/module03/ex01/scavtrap.hpp
class Scavtrap : public Claptrap{
    public:
    Scavtrap(std::string name);
    ~Scavtrap();
    void    attack(const std::string &target);
    void    guardgate();
    
=======
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
>>>>>>> 5fbf4e4f56aa1c3fdb5f5e2d3ee1197e96bf3b0b:C++/module00/ex01/phonebook.hpp
};

#endif