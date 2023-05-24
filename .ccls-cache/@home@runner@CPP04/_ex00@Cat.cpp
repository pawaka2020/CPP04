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
//#include <iostream>

Cat::Cat() {
    std::cout << "Creating a Cat." << std::endl;
    _type = "Cat";
}

Cat::~Cat() {
    std::cout << "Destroying a Cat." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
