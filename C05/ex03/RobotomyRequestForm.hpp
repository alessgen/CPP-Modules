/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:23:04 by agenoves          #+#    #+#             */
/*   Updated: 2023/01/20 12:15:51 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		// member function
			~RobotomyRequestForm(void);
			RobotomyRequestForm(const std::string& target);
			RobotomyRequestForm(RobotomyRequestForm const& src);
			RobotomyRequestForm &operator=(RobotomyRequestForm const& src);
			void action(Bureaucrat const &executor) const;
			
	class FormRefused : public std::exception {

		public:
			const char* what() const throw() {
				return ("The robotomy failed due to low execute grade");
			}
	};
};

#endif