/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:34:36 by agenoves          #+#    #+#             */
/*   Updated: 2022/11/17 18:07:0608 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main() {
	// Istanza della rubrica
	PhoneBook rubrica;
		
	std::string str;
	bool cmd = true;

	while (cmd == true) {
		std::cout << "Choice a command between ADD, SEARCH or EXIT!" << std::endl;
		if (std::getline(std::cin, str).eof() == true)
			return (1);
		else {
			if (str.empty())
			{
				std::cout << "Missing command!" << std::endl;
				continue;
			}
			if (str == "ADD") {
				rubrica.add();
			}
			else if (str == "SEARCH") {
				rubrica.search();
			}
			else if (str == "EXIT") {
				cmd = false;
			}
			else {
				std::cout << "Wrong command! Enter ADD, SEARCH or EXIT" << std::endl;
				continue;
			}
		}
	}
	return (0);
}