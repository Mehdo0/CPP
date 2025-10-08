/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:01:10 by mehdi             #+#    #+#             */
/*   Updated: 2025/10/08 12:50:08 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "stack1 top before pop : " << mstack.top() << "\n";
    mstack.pop();
    std::cout << "stack1 top after pop : " << mstack.top() << "\n";
    std::cout << "stack1 size : " << mstack.size() << "\n";
    if (mstack.empty())
        std::cout << "stack1 est vide.\n";
    else
        std::cout << "stack1 n'est pas vide\n";
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "| " << *it << " |\n";
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "standard stack top : " << s.top() << "\n";
    std::cout << "standard stack size : " << s.size() << "\n";
    std::list<int> list1;
    list1.push_back(5);
    list1.push_back(17);
    std::cout << "list1 top : " << *list1.begin() << "\n";
    list1.erase(list1.begin());
    std::cout << "list1 size : " << list1.size() << "\n";
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(737);
    list1.push_back(0);
    std::list<int>::iterator it2 = list1.begin();
    std::list<int>::iterator ite2 = list1.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << "\n";
        ++it2;
    }
    
    std::cout << "standard list top : " << list1.front() << "\n";
    std::cout << "standard list size : " << list1.size() << "\n";
    return 0;
}
