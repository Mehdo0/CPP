/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:51:12 by mehdi             #+#    #+#             */
/*   Updated: 2025/06/12 14:51:44 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "claptrap.hpp"

class Scavtrap : public Claptrap{
    public:
    Scavtrap(std::string name);
    ~Scavtrap();
    void    attack(const std::string &target);
    void    guardgate();
};

#endif