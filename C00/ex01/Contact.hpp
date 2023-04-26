/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:25:32 by agenoves          #+#    #+#             */
/*   Updated: 2022/11/21 15:29:13 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nick_name;
		std::string darkest_secret;
	
	public:
	// Constructor and Decostructor
		Contact(void);
		~Contact(void);
		// Set Value	
			void set_firstname(std::string str);
			void set_lastname(std::string str);
			void set_phone_number(std::string str);
			void set_nickname(std::string str);
			void set_secret(std::string str);
			// Get Value
				std::string get_firstname();
				std::string get_lastname();
				std::string get_phone_number();
				std::string get_nickname();
				std::string get_secret();	
};

#endif