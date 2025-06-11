/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:15:58 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/21 17:17:56 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "claptrap.hpp"

class Fragtrap : public Claptrap{
    public:
    Fragtrap(std::string name);
    ~Fragtrap();
    void    high_fives();
};

#endif