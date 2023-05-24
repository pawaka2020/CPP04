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
#include <vector>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


//Deep copy: Creates a separate and independent object with its own memory. Changes to the original object do not affect the deep copy.
// Shallow copy: Creates a new object that shares the same memory as the original object. Changes to the original object will be reflected in the shallow copy.
//test deep copy for 'Brain'
void testDeepCopy() {
	Brain originalBrain;
	Brain copiedBrain = originalBrain;
	originalBrain.setIdeas("Original Idea");
	copiedBrain.setIdeas("Modified Idea");
	
    if (copiedBrain != originalBrain) {
        std::cout << "testDeepCopy OK" << std::endl;
    } else {
        std::cout << "testDeepCopy KO" << std::endl;
    }
}

//test with 'Brain' already embedded inside another class
void testDeepCopy2() {
	Dog originalDog;
	Dog copiedDog = originalDog;
	originalDog.getBrain()->setIdeas("Original idea");
	copiedDog.getBrain()->setIdeas("Copied idea");

    if (*copiedDog.getBrain() != *originalDog.getBrain()) {
        std::cout << "testDeepCopy2 OK" << std::endl;
    } else {
        std::cout <<  "testDeepCopy2 KO" << std::endl;
    }
}

//this time, as heap-allocated objects
void testDeepCopy3() {
   	Cat* cat1 = new Cat();
	cat1->getBrain()->setIdeas("cat1");
    Cat* cat2 = new Cat(*cat1);
	cat1->getBrain()->setIdeas("cat2");
	
	if (*cat1->getBrain() != *cat2->getBrain()) {
    	std::cout << "testDeepCopy3 OK" << std::endl;
	} 
	else {
    	std::cout << "testDeepCopy3 KO" << std::endl;
	}

    delete cat1;
    delete cat2;	
}

//as shown in pdf
void pdfTest() {
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;
	std::cout << "pdfTest OK" << std::endl;
}

int main() {
	const size_t size = 5;
	Animal* animals[size];
    // Create and fill the array of Animal objects
    for (size_t i = 0; i < size; ++i) {
        if (i < size / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }
    // Delete every Animal in the array
    for (size_t i = 0; i < size; ++i) {
        delete animals[i];
    }

    testDeepCopy();
    testDeepCopy2();
	testDeepCopy3();
	pdfTest();

    return 0;
}