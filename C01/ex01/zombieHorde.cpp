/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:33:45 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:33:51 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	
	Zombie *zombiehorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombiehorde[i].setName(name);
	return (zombiehorde);
}
