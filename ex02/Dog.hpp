/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
	public:
		//constructors and destructor
		Dog();
		Dog(const Dog& other);
		~Dog();
		//operator overloads
		Dog& operator=(const Dog& other);
		//getters and setters
		Brain* getBrain() const;
		//member functions
		void makeSound() const;
	private:
		//fields
		//std::string _type;
		Brain* _brain;
};

#endif	