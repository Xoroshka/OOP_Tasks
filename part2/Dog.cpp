#include <string>
#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
}
Dog::Dog(const Dog &other) {
	type = other.type; 
	brain = new Brain(*other.brain);
}
Dog &Dog::operator=(const Dog &other) {
	type = other.type; 
	brain = new Brain(*other.brain);
	return *this;
}
Dog::~Dog() {
	delete brain;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}