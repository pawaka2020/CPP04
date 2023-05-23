/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

//makes sure a copy is created with separate data rather than just references
//if the fields inside 'brain' can be made different in dog1 and dog2, then 
//indeed these two objects are distinct, thus they are deep copies.
void testDeepCopy() {
    Dog* dog1 = new Dog();
	dog1->getBrain()->setIdeas("dog1");
    Dog* dog2 = new Dog(*dog1);
	dog1->getBrain()->setIdeas("dog2");
	
	if (*dog1->getBrain() != *dog2->getBrain()) {
    	std::cout << "Deep copy successful!" << std::endl;
	} 
	else {
    	std::cout << "Deep copy failed!" << std::endl;
	}

    delete dog1;
    delete dog2;	
}

void testDeepCopy2() {
   	Cat* cat1 = new Cat();
	cat1->getBrain()->setIdeas("cat1");
    Cat* cat2 = new Cat(*cat1);
	cat1->getBrain()->setIdeas("cat2");
	
	if (*cat1->getBrain() != *cat2->getBrain()) {
    	std::cout << "Deep copy successful!" << std::endl;
	} 
	else {
    	std::cout << "Deep copy failed!" << std::endl;
	}

    delete cat1;
    delete cat2;	
}

int main(void) {
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;
	delete i;

	testDeepCopy();
	testDeepCopy2();
	return 0;
}