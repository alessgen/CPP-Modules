/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:23:04 by agenoves          #+#    #+#             */
/*   Updated: 2023/01/20 12:00:26 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	
	public:
		// Costructor
			PresidentialPardonForm(void);
			~PresidentialPardonForm(void);
			PresidentialPardonForm(const std::string& target);
			PresidentialPardonForm(PresidentialPardonForm const& src);
			PresidentialPardonForm &operator=(PresidentialPardonForm const& src);
			void action(Bureaucrat const &executor) const;
			
	class FormRefused : public std::exception {

		public:
			const char* what() const throw() {
				return ("the pardon's request has been refused due to low execute grade");
			}
	};
};

#endif