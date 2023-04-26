#include "easyfind.hpp"

void print(int i)
{
	std::cout << i << std::endl; 
}

int main()
{
	std::array<int, 43> arr;
	std::list<int> list;
	std::vector<int> vector;

	for (int i = 0; i <= 42; i++)
		vector.push_back(i);
	try
	{
		// Puoi provare anche con altri numeri!!!
		std::vector<int>::iterator it_vector = easyfind(vector, 44);
		std::cout << "Occurrance found > Vector starting at 12:" << std::endl;
		for_each(it_vector, vector.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i <= 42; i++)
		list.push_back(i);
	try
	{
		// Puoi provare anche con altri numeri!!!
		std::list<int>::iterator it_list = easyfind(list, 19);
		std::cout << "Occurence found > List starting at 19:" << std::endl;
		for_each(it_list, list.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	//Non é possibile riempiree l'array con la funzione/metodo push back;
	for (unsigned long k = 0; k < arr.size(); k++)
			arr[k] = k;
	try
	{
		// Puoi provare anche con altri numeri!!!
		std::array<int, 43>::iterator it_arr = easyfind(arr, 38);
		std::cout << "Occurrance found > Arr starting at 38:" << std::endl;
		std::for_each(it_arr, arr.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}