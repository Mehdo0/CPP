/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:00:35 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/09 11:06:32 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "brain.hpp"
#include "animal.hpp"

class Cat : public Animal {
private:
    Brain *brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    void makeSound() const ;
    std::string getType() const ;
};

#endif