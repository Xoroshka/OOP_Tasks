#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("unknown") {}
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	type = other.type;
	return *this;
}
WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound() const {
	std::cout << "basic has no sound!" << std::endl;
}

std::string	WrongAnimal::getType() const { return type; }