/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:26:33 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/29 17:12:26 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>


template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T1, typename T2>
void swap(T1& a, T2& b) {
    (void)a;
    (void)b;
    return;
}

template <typename T>
T &min(T& a, T& b){
    return (a < b ? a:b);
}

template <typename T1, typename T2>
void min(T1& a, T2& b){
    (void)a;
    (void)b;
    return;
}

template <typename T>
T &max(T& a, T& b){
    return (a > b ? a:b);
}

template <typename T1, typename T2>
void max(T1& a, T2& b){
    (void)a;
    (void)b;
    return;
}