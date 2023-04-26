/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:34:50 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:50 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Do you know Harl? We all do, do we?" << std::endl;
}

Harl::~Harl(void) {
	std::cout << "I hope i ws helpful!" << std::endl;
}

void Harl::debug(){
	std::cout << "\tDEBUG\t" << std::endl;
}

void Harl::info(){
	std::cout << "\tINFO\t" << std::endl;
}

void Harl::warning(){
	std::cout << "\tWARNING\t" << std::endl;
}

void Harl::error(){
	std::cout << "\tERROR\t" << std::endl;
}


void Harl::complain(std::string level) {
	void (Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*ptr_complain[i])();
	}
}