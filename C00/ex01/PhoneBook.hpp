/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:21:03 by agenoves          #+#    #+#             */
/*   Updated: 2022/11/21 17:27:45 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
	
	private:
		Contact contacts[8];

	public:
	// Constructor and Decostructor
		PhoneBook(void);
		~PhoneBook(void);
		// Commands PhoneBook
			void add(void);
			void search(void);
			void display(void);
	
};

#endif