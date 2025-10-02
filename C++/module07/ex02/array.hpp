/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:06:46 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/02 19:14:47 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array{
    
    private:
    T   *data;
    unsigned int    size;
    
    public:
    Array(): data(NULL), size(0){};
    Array(unsigned int n): data(new T[n]), size(n){};
    
    Array(const Array& other) : data(new T[other.size]), size(other.size) {
        for (unsigned int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new T[size];
            for (unsigned int i = 0; i < size; i++) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }
    
    ~Array(){delete[] data;};

    T& operator[](unsigned int index) {
        return data[index];
    }

    const T& operator[](unsigned int index) const {
        return data[index];
    }

    unsigned int Size() const { return size; }
};