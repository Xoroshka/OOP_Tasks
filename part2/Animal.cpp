#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal() : type("unknown") {}
Animal::Animal(const Animal &other) : type(other.type) {}
Animal &Animal::operator=(const Animal &other) {
	type = other.type;
	return *this;
}
Animal::~Animal() {}

std::string	Animal::getType() const { return type; }