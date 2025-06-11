/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:22:58 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/21 15:38:56 by mmouaffa         ###   ########.fr       */
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