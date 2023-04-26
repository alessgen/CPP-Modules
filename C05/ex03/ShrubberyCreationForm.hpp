/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:23:21 by agenoves          #+#    #+#             */
/*   Updated: 2023/01/20 12:16:02 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		// Member function
			~ShrubberyCreationForm(void);
			ShrubberyCreationForm(const std::string& target);
			ShrubberyCreationForm(ShrubberyCreationForm const& src);
			ShrubberyCreationForm &operator=(ShrubberyCreationForm const& src);
			void action(Bureaucrat const &executor) const;
			
	class FormRefused : public std::exception {

		public:
			const char* what() const throw() {
				return ("the shrubbery creation failed due to low execute grade");
			}
	};
};

#endif