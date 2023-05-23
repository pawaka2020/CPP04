// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   Dog.cpp                                            :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
// /*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


#include "Dog.hpp"

//constructors and destructor
Dog::Dog():Animal() {
	std::cout << "'Dog' constructed." << std::endl;
	_type = "Dog";
}
Dog::Dog(const Dog& other):Animal() {
std::cout << "'Dog' copy constructed." << std::endl;
	*this = other;
}
Dog::~Dog()
{
	std::cout <<"'Dog' destroyed." <<std::endl;
}

//operator overloads
Dog& Dog::operator=(const Dog& other) {
	_type = other._type;
	return *this;
}

//member functions
void Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}