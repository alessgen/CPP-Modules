/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:33:41 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:33:43 by agenoves         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
			// Member function
			void announce(void);
			void setName(std::string name);
};

#endif