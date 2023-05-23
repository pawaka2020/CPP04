/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
	public:
		//constructors and destructor
		AAnimal();
		AAnimal(const AAnimal& other);
		//fully virtual, meaning no implementation and child classes must provide
		//this implementation instead.
		virtual ~AAnimal() = 0;
		//operator overloads
		AAnimal& operator=(const AAnimal& other);
		//getters and setters
		void setType(const std::string& type);
		std::string getType() const;
		//member functions
		virtual void makeSound() const;
	protected:
		//fields
		std::string _type;
};

#endif
