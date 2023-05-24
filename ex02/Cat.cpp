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
#include <iostream>

Cat::Cat() {
    _brain = new Brain();
    _type = "Cat";
	std::cout << "Creating a Cat." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    _brain = new Brain(*other._brain);
	std::cout << "Creating a Cat copy." << std::endl;
}

Cat::~Cat() {
    delete _brain;
	std::cout << "Destroying a Cat." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! I am a cat." << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}
