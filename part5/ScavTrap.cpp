#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	hp = 100;
	ep = 50;
	dmg = 20;
	std::cout << "ScavTrap default constructor was called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap " << name << " copy constructor was called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	hp = 100;
	ep = 50;
	dmg = 20;
	std::cout << "ScavTrap " << name << " constructor was called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destructor was called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assigned operator was called!" << std::endl;
	name = other.name;
	hp = other.hp;
	ep = other.ep;
	dmg = other.dmg;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << name;
	if (ep && hp)
	{
		std::cout << " attacks " << target << ", causing "
			<< dmg << " points of damage!" << std::endl;
		ep--;
		return;
	}
	std::cout << " tried to attack " << target
		<< ", but haven't ";
	if(!hp)
		std::cout << "hit points!" << std::endl;
	else
		std::cout << "energy points!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now guarding the gate." << std::endl;
}



