/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
private:
    std::string _ideas[100];

public:
    Brain();
	//added to test deep copying later
    Brain(const Brain& other);
    ~Brain();
	//these two will be used for testing deep copying
    void setIdeas(const std::string& idea);
    bool operator!=(const Brain& other) const;
};

#endif
