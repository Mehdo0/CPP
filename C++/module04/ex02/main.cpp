/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:01:47 by mehdi             #+#    #+#             */
/*   Updated: 2025/09/08 10:41:22 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main() {
    //AAnimal a;
    //AAnimal* ptr = new AAnimal();
    
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    dog->makeSound();  // should print "Woof!" or similar
    cat->makeSound();  // should print "Meow!" or similar

    delete dog;
    delete cat;

    return 0;
}
