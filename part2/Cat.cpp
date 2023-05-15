#include <string>
#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
}
Cat::Cat(const Cat &other) {
	type = other.type; 
	brain = new Brain(*other.brain);
}
Cat &Cat::operator=(const Cat &other) {
	type = other.type; 
	brain = new Brain(*other.brain);
	return *this;
}
Cat::~Cat() {
	delete brain;
}

void Cat::makeSound() const {
	std::cout << "Meeoow!" << std::endl;
}