/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:32:39 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:32:40 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main() {
	Zombie *zombie = newZombie("Alessio");
	zombie->announce();
	randomChump("Federico");
	delete zombie;
}