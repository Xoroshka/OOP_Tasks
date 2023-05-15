#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;

	const WrongCat* h = new WrongCat();
	const WrongAnimal* k = h;
	std::cout << h->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	h->makeSound();
	k->makeSound();

	Animal *array[50];
	for (int i = 0; i < 50; ++i)
	{
		if (i < 25)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (int i = 0; i < 50; ++i)
		array[i]->makeSound();
	for (int i = 0; i < 50; ++i)
		delete array[i];
	return 0;
}