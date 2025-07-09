/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:01:49 by mehdi             #+#    #+#             */
/*   Updated: 2025/07/03 14:16:41 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Wronganimal* Fakecat = new Wrongcat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Wronganimal* fake = new Wronganimal();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << Fakecat->getType() << " " << std::endl;
    meta->makeSound();
    fake->makeSound();
    i->makeSound();
    j->makeSound();
    Fakecat->makeSound();
    delete meta;
    delete Fakecat;
    delete j;
    delete i;
    delete fake;
    return 0;
}
