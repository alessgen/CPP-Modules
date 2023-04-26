/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:34:17 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:17 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	
	// Private Attributes
	private:
		std::string name;
		Weapon* weapon;
	// Public Attributes
	public:
		HumanB(std::string name);
		~HumanB(void);
		// Member Function
			void attack(void);
			void setWeapon(Weapon& weapon);
};

#endif