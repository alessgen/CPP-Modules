/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:35:14 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:35:15 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;
	if (argc != 2)
	{
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
}