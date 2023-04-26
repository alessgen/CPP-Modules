/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:08:03 by agenoves          #+#    #+#             */
/*   Updated: 2023/01/20 12:06:50 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat {

    private:
        std::string const name;
        int grade;

    public:
        // Default Costructor
            Bureaucrat();
        // Parameter Costructor
            Bureaucrat(const std::string name, int grade);
        // Destructor
            ~Bureaucrat();
        // Overload assignment Operator
            Bureaucrat &operator=(const Bureaucrat& src);
        // Copy Costructor
            Bureaucrat(const Bureaucrat& src);
        // Getters function
            std::string getName() const;
            int getGrade() const;
        // Increment grade
            void incrementGrade();
        // Decrement grade
            void decrementGrade();
        // Print if the Bureaucrat is signed or not
			void signForm(Form& src);
        // Execute Form
            void executeForm(Form const& form);

        class GradeTooHighException : public std::exception {

            public:
                // Costructor
                const char* what() const throw() {
                    return ("Grade too high, can't instantiate the object");
                }
        };

        class GradeTooLowException : public std::exception {

            public:
                const char* what() const throw() {
                        return ("Grade too low, can't instantiate the object");
                }
        };

};

std::ostream& operator<<(std::ostream &output, const Bureaucrat &src);

#endif