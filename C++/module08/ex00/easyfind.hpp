/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:58:39 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/07 10:08:55 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <algorithm>
#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::out_of_range("easyfind: value not found");
    return it;
}
