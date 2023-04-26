/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:33:24 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:33:26 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
	private:
		std::string name;
	
	public:
		// Costructor and Decostructor
		Zombie(std::string name);
		~Zombie(void);
			// Member function
			void announce(void);
			
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
	
#endif