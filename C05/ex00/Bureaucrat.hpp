#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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