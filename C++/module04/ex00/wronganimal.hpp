/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:12:20 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/03 14:03:42 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "main.hpp"

class Wronganimal {
protected:
    std::string type;
public:
    Wronganimal();
    virtual ~Wronganimal();
    virtual void makeSound() const;
    virtual std::string getType() const;
};

#endif