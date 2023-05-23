/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//constructors and destructor
WrongCat::WrongCat():WrongAnimal() {
	std::cout << "'WrongCat' constructed." << std::endl;
	_type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& other):WrongAnimal() {
std::cout << "'WrongCat' copy constructed." << std::endl;
	*this = other;
}
WrongCat::~WrongCat() {
	std::cout <<"'Cat' destroyed." <<std::endl;
}

//operator overloads
WrongCat& WrongCat::operator=(const WrongCat& other) {
	_type = other._type;
	return *this;
}

//member functions
void WrongCat::makeSound() const {
	std::cout << "Wrong meow" << std::endl;
}