/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:23:18 by agenoves          #+#    #+#             */
/*   Updated: 2023/02/03 12:07:58 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): Form("Shrubbery", target, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src): Form(src) {
	*this = src;
	std::cout << "ShrubberyCreationForm Copy Costructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src) {
	std::cout << "ShrubberyCreationForm Overload assignment called" << std::endl;
    if (this == &src)
		return (*this);
	return (*this);
}

void ShrubberyCreationForm::action(Bureaucrat const& target) const {
	if (target.getGrade() <= this->getexecuteGrade())
	{
		std::cout << target.getName() << " executed " << this->getName() << std::endl;
		std::fstream file;
		file.open(this->getTarget() + "_shrubbery.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	
		file << "                         O                         " << std::endl;
		file << "                        ***                        " << std::endl;
		file << "                       **O**                       " << std::endl;
		file << "                      *******                      " << std::endl;
		file << "                     *********                     " << std::endl;
		file << "                    ***********                    " << std::endl;
		file << "                     ******o**                     " << std::endl;
		file << "                    ***********                    " << std::endl;
		file << "                   ****o********                   " << std::endl;
		file << "                  ***************                  " << std::endl;
		file << "                 ****o***o********                 " << std::endl;
		file << "                *******************                " << std::endl;
		file << "              ***********************              " << std::endl;
		file << "                 *****O***********                 " << std::endl;
		file << "                **********o********                " << std::endl;
		file << "               ****************o****               " << std::endl;
		file << "              **O********************              " << std::endl;
		file << "             ***********o********O****             " << std::endl;
		file << "           *****************************           " << std::endl;
		file << "               *********************               " << std::endl;
		file << "              ***o*******************              " << std::endl;
		file << "             ***********o*******o*****             " << std::endl;
		file << "            ***************************            " << std::endl;
		file << "           ***********************O*****           " << std::endl;
		file << "          ***O***************************          " << std::endl;
		file << "        ***********************************        " << std::endl;
		file << "             *************************             " << std::endl;
		file << "            *******o********o**********            " << std::endl;
		file << "           *****************************           " << std::endl;
		file << "          **************o****************          " << std::endl;
		file << "         *************************O*******         " << std::endl;
		file << "        *****O*****************************        " << std::endl;
		file << "      **************o************************      " << std::endl;
		file << "            ***************************            " << std::endl;
		file << "           *************o***************           " << std::endl;
		file << "          ***********o*******************          " << std::endl;
		file << "         **************************O******         " << std::endl;
		file << "        ***o******************O************        " << std::endl;
		file << "      ***o***********o****************o******      " << std::endl;
		file << "                        ###                        " << std::endl;
		file << "                        ###                        " << std::endl;
		file << "                        ###                        " << std::endl;
		file << "                    ###########                    " << std::endl;
		file << "                    ###########                    " << std::endl;
		file.close();
	}
	else
		throw ShrubberyCreationForm::FormRefused();
}