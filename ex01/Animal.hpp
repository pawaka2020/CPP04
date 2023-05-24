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
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string _type;

public:
    Animal();
	/*virtual because we want this destructor to also be called when 'Dog' or 'Cat''s
	destructors get called, ensuring clean memory management*/	
    virtual ~Animal();
	//not virtual because this will be the same for 'Animal' and 'Dog' and 'Cat'
    virtual std::string getType() const;
	//virtual because I expect 'Dog' and 'Cat' to modify this
    virtual void makeSound() const;
};

#endif
