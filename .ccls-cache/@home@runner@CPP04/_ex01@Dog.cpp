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
#include <iostream>

Dog::Dog() {
    _brain = new Brain();
    _type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
    _brain = new Brain(*other._brain);
}

Dog::~Dog() {
    delete _brain;
}

void Dog::makeSound() const {
    std::cout << "Woof! I am a dog." << std::endl;
}

Brain* Dog::getBrain() const {
    return _brain;
}
