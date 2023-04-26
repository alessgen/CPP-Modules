/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:50:34 by marvin            #+#    #+#             */
/*   Updated: 2023/01/12 15:35:0 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	//Protected attributes
	protected:
		std::string type;
	// Public attributes;
	public:
		Animal(void); // Default Costructor 
		virtual ~Animal(void); // virtual Destructor
		Animal(std::string name); // Name Costructor
		Animal(Animal const& src); // Copy costructor 
        Animal &operator=(Animal const &src); // Copy assignment costructor
        //Member function
            std::string getType(void) const;
			// Pure virtual function
            	virtual void makeSound() const = 0;
};

#endif