/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:19:39 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/08 10:31:17 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <time.h>

int main()
{
    srand(time(NULL));
    Span s(100000);
    std::cout << "vector size : " << s.getVectorSize() << std::endl;
    for (unsigned int i = 0; i < 100000; i++){
        s.addNumber(rand());
    }
    s.printNumbers();
    std::cout << "vector size : " << s.getVectorSize() << std::endl;
    try{
        s.addNumber(1000);
    }
    catch(const std::exception &e){
        std::cerr << "Exception : " << e.what() << std::endl;
    }
    s.shuffle();
    std::cout <<  "longest span list 1 : " << s.longestSpan() << std::endl;
    std::cout <<  "smallest span list 1 : " << s.shortestSpan() << std::endl;
    Span s2(5);
    s2.addNumber(9);
    s2.addNumber(0);
    s2.addNumber(6);
    s2.addNumber(13);
    s2.addNumber(19);
    s2.shuffle();
    s2.printNumbers();
    try{
        s2.addNumber(1000);
    }
    catch(const std::exception &e){
        std::cerr << "Exception : " << e.what() << std::endl;
    }
    std::cout <<  "longest span list 2 : " << s2.longestSpan() << std::endl;
    std::cout <<  "smallest span list 2 : " << s2.shortestSpan() << std::endl;

    Span s3(2);
    std::cout << "---------longest && smallest span on 0 or 1 element Span-------\n";
    try{
        s3.longestSpan();
    }
    catch(const std::exception &e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try{
        s3.shortestSpan();
    }
    catch(const std::exception &e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    s3.addNumber(10);
    try{
        s3.longestSpan();
    }
    catch(const std::exception &e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try{
        s3.shortestSpan();
    }
    catch(const std::exception &e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    Span s4(10);
    s4.addNumbers(9, 0);
    s4.printNumbers();
    return (0);
}