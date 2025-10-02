/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:01:51 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/02 19:04:17 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <cstddef>

template <typename T>
void    Iter(T *array, size_t size, void (*foo)(T &param))
{
    for (size_t i = 0; i < size; i++)
        foo(array[i]);
    return;
}

template <typename T>
void    Iter(T *array, size_t size, void (*foo)(const T&))
{
    for (size_t i = 0; i < size; i++)
        foo(array[i]);
    return;
}