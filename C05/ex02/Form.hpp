/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:59:04 by agenoves          #+#    #+#             */
/*   Updated: 2023/01/20 13:42:43 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
	
	// Private attributes
	private:
		std::string const name;
		std::string const target;
		const int signgrade;
		const int executegrade;
		bool is_signed;
	// Public attributes and method
	public:
		// Destructor
			~Form(void);
		// Costructor as parameter	
			Form(std::string const name, std::string const target, const int signgrade, const int executegrade);
		// Copy costructor
			Form(Form const& src);
		// Overload assignment
			Form &operator=(Form const& src);
		// Method that change the status of the Bureaucrat
			void beSigned(Bureaucrat const& src);
		// Getters method
            std::string getName() const;
            std::string getTarget() const;
            int getsignGrade() const;
			int getexecuteGrade() const;
			bool getIs_signed();
		// Member function
			void execute(Bureaucrat const &executor) const;
			virtual void action(Bureaucrat const &executor) const = 0;
			
	class GradeTooHighException : public std::exception {

		public:
			// Costructor
			const char* what() const throw() {
				return ("Grade too high, can't sign the Bureaucrat");
			}
	};

	class GradeTooLowException : public std::exception {

		public:
			const char* what() const throw() {
					return ("Grade too low, can't sign the Bureaucrat");
			}
	};
	
	class FormNotSigned : public std::exception {

		public:
			const char* what() const throw() {
					return("Form not signed, call the signForm() function and retry");
			}
	};

};

std::ostream& operator<<(std::ostream &output, const Form &src); 

#endif