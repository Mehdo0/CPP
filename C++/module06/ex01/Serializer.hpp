/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 18:51:43 by mmouaffa          #+#    #+#             */
/*   Updated: 2025/10/19 15:50:01 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <string>
#include <stdint.h>
#include "data.hpp"


class Serializer{
    public:
    static uintptr_t serialize(Data* ptr){
        return reinterpret_cast<uintptr_t>(ptr);
    }
    static Data* deserialize(uintptr_t raw){
        return reinterpret_cast<Data*>(raw);
    }
};
