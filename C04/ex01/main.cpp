#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *array[10];
	
	for (int i = 0; i < 5; i++)
		array[i] = new Dog();
	for (int i = 5; i < 10; i++)
		array[i] = new Cat();
	int x = 0;
	for (int i = 0; i < 5; i++)
	{
		Dog copy2(*(Dog *)array[i]);
		Cat copy(*(Cat *)array[i]);
		std::cout << copy.getBrain()->getIdea(x++) << std::endl;
		std::cout << copy2.getBrain()->getIdea(x++) << std::endl;
	}
    for (int i = 0; i < 10; i++)
        delete array[i];
    return 0;
}
