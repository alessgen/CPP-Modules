/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:24:53 by agenoves          #+#    #+#             */
/*   Updated: 2022/11/21 15:48:22 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

void Contact::set_firstname(std::string str) {
	this->first_name = str;
};

void Contact::set_lastname(std::string str) {
	this->last_name = str;
};

void Contact::set_phone_number(std::string str) {
	this->phone_number = str;
};

void Contact::set_nickname(std::string str) {
	this->nick_name = str;
};

void Contact::set_secret(std::string str) {
	this->darkest_secret = str;
};

std::string Contact::get_firstname(void) {
	return first_name;
};

std::string Contact::get_lastname(void) {
	return last_name;
};

std::string Contact::get_phone_number(void) {
	return phone_number;
};

std::string Contact::get_nickname(void) {
	return nick_name;
};

std::string Contact::get_secret(void) {
	return darkest_secret;
};
