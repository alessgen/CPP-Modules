/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:33:50 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:33:51 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string string = "HI THIS IS BRAINZ";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	// Come stampare le stringhe con i puntatori //
	std::cout << "The value of the string is: " << string << std::endl;
	std::cout << "The value of the stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value of the stringREF is: " << stringREF << std::endl;
	// Come stampare gli indirizzi di memoria della stringa //
	std::cout << "The memory address of the string is: " << &string << std::endl;
	std::cout << "the memory address pointed by stringPTR is: " << stringPTR << std::endl;
	std::cout << "the memory address pointed by stringREF is: " << &stringREF << std::endl;
}