#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template <typename T> void swap(T& num1, T& num2)
{
    T tmp;

    tmp = num1;
    num1 = num2;
    num2 = tmp;
}

template <typename T> T min(T& num1, T& num2)
{
	return ((num1 < num2) ? num1 : num2);
}

template <typename T> T max(T& num1, T& num2)
{
	return ((num1 > num2) ? num1 : num2);
}

#endif