/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:19:52 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/08 11:17:07 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Welcome to PhoneBook!" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Goodbye, contact me again soon!" << std::endl;
}

void PhoneBook::add(void) {
	std::string str;
	static int index = 0;
	int check = 0;
	
	if (index >= 8) {
		index = 0;
	if (index < 8) {
		std::cout << "Enter the first name: " << std::endl;
		if (std::getline(std::cin, str).eof() == true)
			check = 1;
		this->contacts[index].set_firstname(str);
		if (!check)
			std::cout << "Enter the last name: " << std::endl;
		if (std::getline(std::cin, str).eof() == true)
			check = 1;
		this->contacts[index].set_lastname(str);
		if (!check)
			std::cout << "Enter the nickname: " << std::endl;
		if (std::getline(std::cin, str).eof() == true)
			check = 1;
		this->contacts[index].set_nickname(str);
		if (!check)
			std::cout << "Enter the phone number: " << std::endl;
		if (std::getline(std::cin, str).eof() == true)
			check = 1;
		this->contacts[index].set_phone_number(str);
		if (!check)
			std::cout << "Enter the darkest secret: " << std::endl;
		if (std::getline(std::cin, str).eof() == true)
			check = 1;
		this->contacts[index].set_secret(str);
		// Check se il field è vuoto e setta NULL i field settati precedentemente
		if (this->contacts[index].get_firstname().empty() || this->contacts[index].get_lastname().empty() \
			|| this->contacts[index].get_nickname().empty() || this->contacts[index].get_phone_number().empty() \
			|| this->contacts[index].get_secret().empty() || check) {
				this->contacts[index].set_firstname("");
				this->contacts[index].set_lastname("");
				this->contacts[index].set_nickname("");
				this->contacts[index].set_phone_number("");
				this->contacts[index].set_secret("");
				return ;
			}
			index++;
		}
	}
}

void PhoneBook::display(void) {
	
	std::string columns = "--------------------------------------------";
	std::string legends = "     INDEX|FIRST_NAME| LAST_NAME|  NICKNAME";
	std::cout << columns << std::endl;
	std::cout << legends << std::endl;
	std::string firstname,lastname,nickname;
	for (int i = 0; i < 8; i++) {
		firstname = this->contacts[i].get_firstname();
		lastname = this->contacts[i].get_lastname();
		nickname = this->contacts[i].get_nickname();
		int diff = 9;
		while (diff-- > 0)
			std::cout << " ";
		std::cout << std::right << i << "|";
		diff = 10 - firstname.length();
		while (diff-- > 0)
			std::cout << " ";
		if (firstname.length() > 9) {
			int temp = firstname.length() - 9;
			firstname.replace(9, temp, ".");
		}
		std::cout << std::right << firstname << "|";
		diff = 10 - lastname.length();
		while (diff-- > 0)
			std::cout << " ";
		if (lastname.length() > 9) {
			int temp = lastname.length() - 9;
			lastname.replace(9, temp, ".");
		}
		std::cout << std::right << lastname << "|";
		diff = 10 - nickname.length();
		while (diff-- > 0)
			std::cout << " ";
		if (nickname.length() > 9) {
			int temp = nickname.length() - 9;
			nickname.replace(9, temp, ".");
		}
		std::cout << std::right << nickname;
		std::cout << std::endl;
	}
	std::cout << columns << std::endl;
}

void PhoneBook::search(void) {
	std::string str;

	this->display();
	std::cout << "Enter the contact's index you want to display!" << std::endl;
	if (std::getline(std::cin, str).eof() == true)
		return;
	int index = stoi(str);
	if (index < 0 || index > 7 || this->contacts[index].get_firstname().length() == 0) {
		std::cout << "You are out of range or this contact's index is not saved!" << std::endl;
		return ;
	}
	else {
		std::cout << "The First name is: " << this->contacts[index].get_firstname() << std::endl;
		std::cout << "The Last name is: " << this->contacts[index].get_lastname() << std::endl;
		std::cout << "The Nickname is: " << this->contacts[index].get_nickname() << std::endl;
		std::cout << "The Phone number name is: " << this->contacts[index].get_phone_number() << std::endl;
		std::cout << "The Darkest secret name is: " << this->contacts[index].get_secret() << std::endl;
	}
}