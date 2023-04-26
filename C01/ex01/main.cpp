/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:33:32 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:33:34 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
	int N = 5;
	
	Zombie *newZombie = zombieHorde(N, "Alessio");
	for (int i = 0; i < N; i++)
		newZombie[i].announce();
	delete [] newZombie;
}