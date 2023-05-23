/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "'Wrong Animal' constructed\n";
	this->_type = "animal";
}
WrongAnimal::WrongAnimal(WrongAnimal &other) {
	std::cout << "'Animal' copy constructed." << std::endl;
	*this = other;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "'WrongAnimal' destroyed." << std::endl;
}

//operator overloads
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	_type = other._type;
	return *this;
}

//getters and setters
void WrongAnimal::setType(const std::string& type) {
	_type = type;
}
std::string WrongAnimal::getType() const {
	return _type;
}

//member functions
void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound." << std::endl;
}