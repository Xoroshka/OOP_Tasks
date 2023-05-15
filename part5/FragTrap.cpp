#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	hp = 100;
	ep = 100;
	dmg = 30;
	std::cout << "FragTrap default constructor was called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap " << name << " copy constructor was called!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	hp = 100;
	ep = 100;
	dmg = 30;
	std::cout << "FragTrap " << name << " constructor was called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructor was called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assigned operator was called!" << std::endl;
	name = other.name;
	hp = other.hp;
	ep = other.ep;
	dmg = other.dmg;
	return *this;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " high Five!" << std::endl;
}
