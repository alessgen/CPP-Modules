/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:15:10 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/06 13:15:10 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main(int ac, char **argv)
{
    if (ac != 2)
    {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }
    try{
        Conversion converter(argv[1]);
    }
    catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}