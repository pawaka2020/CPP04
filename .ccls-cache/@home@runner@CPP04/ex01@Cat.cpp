/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//constructors and destructor
Cat::Cat():Animal() {
	std::cout << "'Cat' constructed." << std::endl;
	_type = "Cat";
	_brain = new Brain();
}
Cat::Cat(const Cat& other):Animal() {
std::cout << "'Cat' copy constructed." << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain);
}
Cat::~Cat() {
	delete _brain;
	std::cout <<"'Cat' destroyed." <<std::endl;
}

//operator overloads
Cat& Cat::operator=(const Cat& other) {
	_type = other._type;
	if (_brain) delete _brain;
	_brain = new Brain(*other.getBrain());
	return *this;
}

Brain* Cat::getBrain() const {
	return (_brain);
}

//member functions
void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}