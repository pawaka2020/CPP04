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
//#include <iostream>

Dog::Dog() {
    std::cout << "Creating a Dog." << std::endl;
    _type = "Dog";
}

Dog::~Dog() {
    std::cout << "Destroying a Dog." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bark!" << std::endl;
}
