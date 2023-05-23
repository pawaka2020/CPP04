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

#include "AAnimal.hpp"

//Constructors and destructor
AAnimal::AAnimal() {
	std::cout << "'AAnimal' constructed." << std::endl;
	_type = "Aanimal";
}
AAnimal::AAnimal(const AAnimal& other) {
	std::cout << "'AAnimal' copy constructed." << std::endl;
	*this = other;
}
AAnimal::~AAnimal() {
	std::cout << "'AAnimal' destroyed." << std::endl;
}

//operator overloads
AAnimal& AAnimal::operator=(const AAnimal& other) {
	_type = other._type;
	return *this;
}

//getters and setters
void AAnimal::setType(const std::string& type) {
	_type = type;
}
std::string AAnimal::getType() const {
	return _type;
}

//even though this is declared as purely virtual, implementation
//is stil included in case derived classes do not implement this
void AAnimal::makeSound() const {
	std::cout << "AAnimal sound." << std::endl;
}