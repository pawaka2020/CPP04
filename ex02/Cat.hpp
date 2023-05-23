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

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
	public:
		//constructors and destructor
		Cat();
		Cat(const Cat& other);
		~Cat();
		//operator overloads
		Cat& operator=(const Cat& other);
		//getters and setters
		Brain* getBrain() const;
		//member functions
		void makeSound() const;
	private:
		//fields
		//heap object declared with 'new'
		Brain* _brain;
};

#endif