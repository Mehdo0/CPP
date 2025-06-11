/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:43:09 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/11 15:43:11 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>

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
    void display__contact() const;
    void displaycontact(int index) const;
    
    std::string get_firstname();
    std::string get_lastname();
    std::string get_surname();
    std::string get_number();
    std::string get_darkestsecret();
};

#endif