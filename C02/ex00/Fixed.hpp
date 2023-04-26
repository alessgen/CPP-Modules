/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:35:51 by agenoves          #+#    #+#             */
/*   Updated: 2022/11/25 19:21:02 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	// Private attributes/member
	private:
		int fixed_value;
		static const int fractional_bits;
	
	// Public attributes/member
	public:
		// Costructor, Destructor, Copy Costructor and Assignment operator
		Fixed(void); // Default Costracotr
		~Fixed(void); // Decostructor
		Fixed(Fixed const & f); // Copy costructor
		Fixed& operator=(Fixed const& f); // Assignement Operator
		// Public Member functions
			int getRawBits(void) const;
			void setRawBits(int const raw);
};

#endif