#include <string>
#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() { type = "WrongCat"; }
WrongCat::WrongCat(const WrongCat &other) { type = other.type; }
WrongCat &WrongCat::operator=(const WrongCat &other) {
	type = other.type;
	return *this;
}
WrongCat::~WrongCat() {}

void WrongCat::makeSound() const {
	std::cout << "Meeoow!" << std::endl;
}