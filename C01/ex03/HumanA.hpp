/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:34:07 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:07 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	
	// Private Attributes
	private:
		std::string name;
		Weapon& weapon;
	// Public Attributes
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		// Member Function
			void attack(void);
};

#endif