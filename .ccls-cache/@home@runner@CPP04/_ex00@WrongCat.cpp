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
#include <iostream>

WrongCat::WrongCat() {
    std::cout << "Creating a WrongCat." << std::endl;
    _type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "Destroying a WrongCat." << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound!" << std::endl;
}
