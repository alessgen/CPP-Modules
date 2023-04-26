#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream> // std::cout
#include <numeric> // std::adjacent_difference
#include <vector>
#include <algorithm>
#include <limits>

class Span{

	private:
		unsigned int num;
		std::vector <int> arr;

	public:
		Span(unsigned int i);
		~Span();
		void addNumber(unsigned int i);
		long int shortestSpan();
		long int longestSpan();

	class FullList : public std::exception{
		public:
			const char *what() const throw(){
				return "No space left";
			}
	};

	class NoNumbers : public std::exception{
		public:
			const char *what() const throw(){
				return "No numbers found!";
			}
	};
};

#endif