/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//constructors and destructor
Dog::Dog(): AAnimal() {
	std::cout << "'Dog' constructed." << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal() {
	std::cout << "'Dog' copy constructed." << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain);
}

Dog::~Dog()
{
	delete _brain;
	std::cout <<"'Dog' destroyed." <<std::endl;
}

// Dog& Dog::operator=(const Dog& other) {
//     // Check for self-assignment
//     if (this == &other)
//         return *this;
//     AAnimal::operator=(other);
//     delete _brain;
//     _brain = new Brain(*other._brain);
//     return *this;
// }

Brain* Dog::getBrain() const {
	return (_brain);
}

//member functions
void Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}