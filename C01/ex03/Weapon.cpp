/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:34:29 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/02 14:34:30 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {

}

Weapon::Weapon(std::string weapon_name) {
	this->type = weapon_name;
}

Weapon::~Weapon(void){
	//
}

const std::string &Weapon::getType() {
	return (this->type);
}

void Weapon::setType(std::string new_type) {
	// Weapon::type = new_type;
	this->type = new_type;
}