/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouaffa <mmouaffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:53:30 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/04/10 14:26:37 by mmouaffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string.h>

class Harl{
    private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    public:
    void    complain(std::string level);
    
};


typedef void (Harl::*funcPtr)();


#endif