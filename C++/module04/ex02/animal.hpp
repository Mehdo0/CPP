/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:00:55 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/08 10:35:45 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    virtual ~AAnimal();

    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);

    virtual void makeSound() const = 0;
    virtual std::string getType() const;
};


#endif
