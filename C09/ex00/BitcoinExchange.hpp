#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <time.h>
#include <stdlib.h>

class BitcoinExchange {
	public:
		// Costructor
		BitcoinExchange(){};
		BitcoinExchange(std::string csvfile);
		BitcoinExchange (const BitcoinExchange &src); // Copy costructor
		~BitcoinExchange(){};
		BitcoinExchange &operator=(const BitcoinExchange &src); // Overload operator
		// Member function
		void									readfileinput(std::string inputfile);
		void									exec_input();						
		
	private:
		std::map<std::string, float> 			csvMap;
		std::multimap<std::string, float> 		inputMap;
};

#define HBLACK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGREEN "\e[0;92m"
#define HYELLOW "\e[0;93m"
#define HBLUE "\e[0;94m"
#define HMAGENTA "\e[0;95m"
#define HCYAN "\e[0;96m"
#define HWHITE "\e[0;97m"
#define RESET "\e[0m"

#endif