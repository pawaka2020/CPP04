/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Creating a Brain." << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Creating a Brain copy." << std::endl;
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = other._ideas[i];
    }
}

Brain::~Brain() {
    std::cout << "Destroying a Brain." << std::endl;
}

void Brain::setIdeas(const std::string& idea) {
    for (int i = 0; i < 100; ++i) {
        _ideas[i] = idea;
    }
}

bool Brain::operator!=(const Brain& other) const {
    for (int i = 0; i < 100; ++i) {
        if (_ideas[i] != other._ideas[i]) {
            return true;
        }
    }
    return false;
}
