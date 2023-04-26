/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:19:53 by agenoves          #+#    #+#             */
/*   Updated: 2023/01/13 18:04:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	// Private attributes/member
	private:
		int fixed_value;
		static const int fractional_bits;
	
	// Public attributes/member
	public:
		// Costructor, Destructor, Copy Costructor and Assignment operator
		Fixed(void); // Default Costructor
		Fixed(const int value); // Costructor with int as parameter
		Fixed(const float value); // Costructor with float as parameter
		~Fixed(void); // Decostructor
		Fixed(Fixed const & f); // Copy costructor
		Fixed& operator=(Fixed const& f); // Assignement Operator
		// Public Member functions
			int getRawBits(void) const;
			void setRawBits(int const raw);
			float toFloat(void) const;
			int toInt(void) const;
};

std::ostream& operator<<(std::ostream &output, const Fixed &fixed);

#endif