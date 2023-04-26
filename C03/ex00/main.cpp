/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:55:00 by agenoves          #+#    #+#             */
/*   Updated: 2022/12/01 17:21:27 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
	ClapTrap ugo("Volpe");
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.beRepaired(3);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.beRepaired(3);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.beRepaired(3);
	ugo.beRepaired(3);
}