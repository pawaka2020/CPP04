/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors and destructor
Animal::Animal() {
	std::cout << "'Animal' constructed." << std::endl;
	_type = "animal";
}
Animal::Animal(const Animal& other) {
	std::cout << "'Animal' copy constructed." << std::endl;
	*this = other;
}
Animal::~Animal() {
	std::cout << "'Animal' destroyed." << std::endl;
}

//operator overloads
Animal& Animal::operator=(const Animal& other) {
	_type = other._type;
	return *this;
}

//getters and setters
void Animal::setType(const std::string& type) {
	_type = type;
}
std::string Animal::getType() const {
	return _type;
}

//member functions
void Animal::makeSound() const{
	std::cout << "Animal sound." << std::endl;
}