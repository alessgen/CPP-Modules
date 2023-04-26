#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <array>
#include <list>
#include <vector>
#include <algorithm>

class ErrorNotFound : public std::exception{
	public:
		const char *what() const throw()
		{
			return ("Occurrence Not Found!");
		}
};

template <class T> typename T::iterator easyfind(T& arr, int i){
	typename T::iterator iter = std::find(arr.begin(), arr.end(), i);
	if (iter != arr.end())
		return iter;
	throw (ErrorNotFound());
}

#endif