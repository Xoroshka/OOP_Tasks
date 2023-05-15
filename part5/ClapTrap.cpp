#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(), hp(10), ep(10), dmg(0)
{
	std::cout << "ClapTrap default constructor was called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hp(10), ep(10), dmg(0)
{
	std::cout << "ClapTrap " << name << " constructor was called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hp(other.hp), ep(other.ep), dmg(other.dmg)
{
	std::cout << "ClapTrap " << name << " copy constructor was called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assigned operator was called!" << std::endl;
	name = other.name;
	hp = other.hp;
	ep = other.ep;
	dmg = other.dmg;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructor was called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name;
	if (hp && ep)
	{
		std::cout << " lose " << amount << " hit points";
		if (hp <= amount)
		{
			std::cout << ", and doesn't have hit points anymore";
			hp = 0;
		}
		else
		{
			hp -= amount;
			std::cout << ", and now have " << hp << " hit points";
		}

	} else {
		std::cout << " tried to take damage, but doesn't have ";
		if(!hp)
			std::cout << "hit points";
		else
			std::cout << "energy points";
	}
	std::cout << "!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name;
	if (ep && hp)
	{
		hp += amount;
		--ep;
		std::cout << " was repaired for " << amount
			<< " hit points, and now have " << hp << " hit points!";
	} else {
		std::cout << " tried to be repaired, but haven't ";
		if(!hp)
			std::cout << "hit points!";
		else
			std::cout << "energy points!";
	}
	std::cout << std::endl;
}