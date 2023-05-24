/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
    std::cout << "Creating an Animal." << std::endl;
    _type = "Animal";
}

Animal::~Animal() {
    std::cout << "Destroying an Animal." << std::endl;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}
