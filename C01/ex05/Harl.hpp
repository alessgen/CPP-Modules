/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:34:54 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:54 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	
	// Private attributes:
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	// Public Attributes:
	public:
		// Costructor and Decostructor
		Harl(void);
		~Harl(void);
			// Public Member Function
			void complain(std::string level);
};

#endif