/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:C++/module03/ex01/claptrap.hpp
/*   Created: 2025/04/18 14:32:50 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/21 16:06:35 by mmouaffa         ###   ########.fr       */
=======
/*   Created: 2025/04/03 14:00:17 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/06/06 16:33:16 by mehdi            ###   ########.fr       */
>>>>>>> 5fbf4e4f56aa1c3fdb5f5e2d3ee1197e96bf3b0b:C++/module00/ex01/contact.hpp
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class Claptrap{

<<<<<<< HEAD:C++/module03/ex01/claptrap.hpp
  protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
    
  public:
    Claptrap(std::string name);
    Claptrap(const Claptrap& other);
    Claptrap& operator=(const Claptrap& other);
    ~Claptrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
=======
public:
    Contact();  
    void setcontact();
    void displaycontact(int index) const;
    void display__contact() const;
    std::string get_firstname();
    std::string get_lastname();
    std::string get_surname();
    std::string get_number();
    std::string get_darkestsecret();
>>>>>>> 5fbf4e4f56aa1c3fdb5f5e2d3ee1197e96bf3b0b:C++/module00/ex01/contact.hpp
};

#endif