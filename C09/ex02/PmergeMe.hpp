#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <cstring>
#include <stdlib.h>
#include <sys/time.h>
#include <algorithm>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <ctime>


#define HBLACK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGREEN "\e[0;92m"
#define HYELLOW "\e[0;93m"
#define HBLUE "\e[0;94m"
#define HMAGENTA "\e[0;95m"
#define HCYAN "\e[0;96m"
#define HWHITE "\e[0;97m"
#define RESET "\e[0m"

class PmergeMe {
	public:
	// Costructor and Destructor
		PmergeMe();
		~PmergeMe() {};
		PmergeMe(char *input);
		PmergeMe(const PmergeMe &src);
		PmergeMe&operator=(const PmergeMe &src);
	// Member function
		// void 							merge_sort(std::vector<int> & arr);
		// void 							merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &results);
		void								merge(std::vector<int> &arr, int start, int middle, int end);
		void 								mergeSort(std::vector<int> &arr, int start, int end);
		void								mergeSort_deque(std::deque<int> &arr, int start, int end);
		void								merge_deque(std::deque<int> &arr, int start, int middle, int end);
		void								vec_execute();
		void								deque_execute();
		std::vector<int>					vec_int;
		std::deque<int>						deque_int;
	
	class ErrorInput : public std::exception {
		public:
			const char *what() const throw() {
				return ("Invalid input!");
			}
	};
};

#endif