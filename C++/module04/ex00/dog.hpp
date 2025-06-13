/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:00:35 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/12 23:16:34 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "main.hpp"
#include "animal.hpp"

class Dog : public Animal {
public:
    Dog();
    virtual ~Dog();
    void makeSound() const ;
    std::string getType() const ;
};

#endif