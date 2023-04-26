/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:35:18 by marvin            #+#    #+#             */
/*   Updated: 2023/02/03 13:47:18 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat john("Ciccio", 149);
    	std::cout << john;
		john.decrementGrade();
		std::cout << john;
		john.incrementGrade();
		std::cout << john;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}