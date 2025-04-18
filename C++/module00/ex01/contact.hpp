/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:00:17 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/03 16:54:37 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string surname;
    std::string number;
    std::string darkest_secret;

public:
    Contact();  
    void setcontact();
    void displaycontact(int index) const;
    std::string get_firstname();
    std::string get_lastname();
    std::string get_surname();
    std::string get_number();
    std::string get_darkestsecret();
};

#endif
