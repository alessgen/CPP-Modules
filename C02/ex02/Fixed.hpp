/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:35:25 by agenoves          #+#    #+#             */
/*   Updated: 2023/01/03 12:21:222 by marvin           ###   ########.fr       */
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
		// Overload comparison
			bool operator>(Fixed const& f) const;
			bool operator<(Fixed const& f) const;
			bool operator>=(Fixed const& f) const;
			bool operator<=(Fixed const& f) const;
			bool operator==(Fixed const& f) const;
			bool operator!=(Fixed const& f) const;
			// Overload arithmetic operator
				float operator+(Fixed f) const;
				float operator-(Fixed f) const;
				float operator*(Fixed f) const;
				float operator/(Fixed f) const;
				// Overload increment/decrement operator (++i/--i / i++/i--)
					Fixed operator++(); // Pre increment
					Fixed operator--(); // Pre Decrement
					Fixed operator++(int); // Post increment
					Fixed operator--(int); // Post decrement
					// Public Member functions
						int getRawBits(void) const;
						void setRawBits(int const raw);
						float toFloat(void) const;
						int toInt(void) const;
						// Overload member function
							static Fixed &min(Fixed &x, Fixed &y);
							static const Fixed &min(Fixed const &x, Fixed const &y);
							static Fixed &max(Fixed &x, Fixed &y);
							static const Fixed &max(Fixed const &x, Fixed const &y);
};

std::ostream& operator<<(std::ostream &output, const Fixed &fixed);

#endif