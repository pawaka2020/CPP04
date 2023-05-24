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
}

Cat::Cat(const Cat& other) : Animal(other) {
    _brain = new Brain(*other._brain);
}

Cat::~Cat() {
    delete _brain;
}

void Cat::makeSound() const {
    std::cout << "Meow! I am a cat." << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}
