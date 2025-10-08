/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:19:48 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/08 10:26:29 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

class Span {
private:
    std::vector<int> numbers;
    unsigned int N;

public:
    Span(unsigned int n) : N(n) {}

    Span(const Span &other) : numbers(other.numbers), N(other.N) {}

    Span &operator=(const Span &other) {
        if (this != &other) {
            numbers = other.numbers;
            N = other.N;
        }
        return (*this);
    }

    ~Span(){}

    void addNumber(int value) {
        if (numbers.size() >= N) {
            throw std::overflow_error("Span is full");
        }
        numbers.push_back(value);
    }

    int longestSpan(){
        std::vector<int>::iterator smallest = std::min_element(numbers.begin(), numbers.end());
        std::vector<int>::iterator largest = std::max_element(numbers.begin(), numbers.end());
        if (numbers.size() < 2) {
            throw std::logic_error("Not enough numbers to find a span");
        }
        int result = *largest - *smallest;
        return (result);
    }

    int shortestSpan() {
        if (numbers.size() < 2) {
            throw std::logic_error("Not enough numbers to find a span");
        }
        std::vector<int> sorted = numbers;
        std::sort(sorted.begin(), sorted.end());
        int minSpan = std::abs(sorted[1] - sorted[0]);
        for (size_t i = 1; i < sorted.size(); ++i) {
            int diff = std::abs(sorted[i] - sorted[i - 1]);
            if (diff < minSpan) {
                minSpan = diff;
            }
        }
        return minSpan;
    }

    void    addNumbers(int n1, int n2){
        if (numbers.size() >= N) {
            throw std::overflow_error("Span is full");
        }
        if (n1 < n2){
            while (n1 <= n2){
                numbers.push_back(n1);
                n1++;
            }
        }
        else
            while (n2 <= n1){
                numbers.push_back(n2);
                n2++;
            }
        
    }

    unsigned int getVectorSize(){ //debugging purpose
        return numbers.size();
    }

    void printNumbers() const { //debugging purpose
        for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
            {
                std::cout << *it << ", ";
                if (*it % 2 == 0)
                    std::cout << "\n";
            }
            
        }
    }
    
    void    shuffle(){ //debugging purpose
        std::random_shuffle(numbers.begin(), numbers.end());
    }
};