/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
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

class Animal {
	public:
		//constructors and destructor
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();
		//operator overloads
		Animal& operator=(const Animal& other);
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
