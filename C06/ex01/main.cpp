/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:15:05 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/06 13:15:05 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main() {
    Data input;

	input.nickname = "JustSkillz";
	input.race = "Blood Elf";
	input.classcharacter = "Demon Hunter";
	input.startingmap = "Elwynn Forest";
	input.level= 70.5;

	std::cout << "Nickname: " << input.nickname << std::endl;
	std::cout << "Race of the character: " << input.race << std::endl;
	std::cout << "Class of the character: " << input.classcharacter << std::endl;
	std::cout << "Starting map of the character: " << input.startingmap << std::endl;
	std::cout << "Level of the character: " << input.level << std::endl;

	std::cout << "------------------------" << std::endl;

	uintptr_t output_uintptr = serialize(&input);

	Data* output = deserialize(output_uintptr);

	std::cout << "Nickname: " << output->nickname << std::endl;
	std::cout << "Race of the character: " << output->race << std::endl;
	std::cout << "Class of the character: " << output->classcharacter << std::endl;
	std::cout << "Starting map of the character: " << output->startingmap << std::endl;
	std::cout << "Level of the character: " << output->level << std::endl;
}