/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:00:40 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/09 11:00:48 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called\n";
    *this = other;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assignment operator called\n";
    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called\n";
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}
