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

//operator overloads
Brain& Brain::operator=(const Brain& other) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	return *this;
}

//constructors and destructor
Brain::Brain() {
	_ideas = new std::string[100];
	for (int i = 0; i < 100; i++) _ideas[i] = "some ideas";
	std::cout << "'Brain' constructed." << std::endl;
}
Brain::Brain(const Brain& other) {
	_ideas = new std::string[100];
	*this = other;
	std::cout << "'Brain' copy constructed." << std::endl;
}
Brain::~Brain() {
	delete [] _ideas;
	std::cout << "'Brain' destroyed." << std::endl;
}
// Operator overload for !=
bool Brain::operator!=(const Brain& other) const {
	std::cout<< "!= override initiated" << std::endl;
    for (int i = 0; i < 100; i++) {
        if (_ideas[i] != other._ideas[i]) {
            return true;
        }
    }
    return false;
}

//getters and setters
std::string* Brain::getIdeas() const {
	return _ideas;
}
void Brain::setIdeas(const std::string& idea) {
    for (int i = 0; i < 100; i++) {
        _ideas[i] = idea;
    }
}