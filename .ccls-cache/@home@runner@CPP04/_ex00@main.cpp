/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void wrongTest() {
	const WrongAnimal* w1 = new WrongAnimal();
    const WrongAnimal* w2 = new WrongCat();
	std::cout << w1->getType() << " " << std::endl;
	std::cout << w2->getType() << " " << std::endl;
	w1->makeSound(); // will output the WrongAnimal sound
    w2->makeSound(); // will output the WrongAnimal sound
	delete w1;
	delete w2;
}

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	//these non-virtual member functions will behave the same, presenting fields.
	std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
	//these member functions will generate unique messages hard-coded to each derived class
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
	
	wrongTest();
    return 0;
}
