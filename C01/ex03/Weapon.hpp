/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:34:38 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:40 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	
	private:
	// Private Attributes
		std::string type;
	// Public Attributes
	public:
		// Costructor and Decostructor
		Weapon(std::string name);
		Weapon(void);
		~Weapon(void);
			// Member Function
			const std::string &getType(void);
			void setType(std::string new_type);
};


#endif
