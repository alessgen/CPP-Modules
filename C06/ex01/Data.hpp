/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:15:02 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/06 13:15:03 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

// STRUCT DEFINITION
    typedef struct {
        std::string nickname;
        std::string race;
        std::string classcharacter;
        std::string startingmap;
        double level;
    } Data;

// FUNCTION TO IMPLEMENT
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
#endif