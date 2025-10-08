/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:54:42 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/08 12:34:22 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <vector>
#include <cstddef>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>(){}
    ~MutantStack() {}
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
    MutantStack& operator=(const MutantStack& other) {
        std::stack<T>::operator=(other);
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    iterator begin() const{ return this->c.begin(); }
    iterator end() const{ return this->c.end(); }
    
};