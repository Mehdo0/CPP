/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:12:38 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/18 14:14:24 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "main.hpp"
#include "animal.hpp"

class Wrongcat : public Wronganimal {
public:
    Wrongcat();
    virtual ~Wrongcat();
    void makeSound() const ;
    std::string getType() const ;
};

#endif