#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name")
{
	DiamondTrap::name = "default";
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	dmg = FragTrap::dmg;
	std::cout << "DiamondTrap default constructor was called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	DiamondTrap::name = other.DiamondTrap::name;
	std::cout << "DiamondTrap " << name << " copy constructor was called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	DiamondTrap::name = name;
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	dmg = FragTrap::dmg;
	std::cout << "DiamondTrap " << name << " constructor was called!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destructor was called!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assigned operator was called!" << std::endl;
	name = other.name;
	hp = other.hp;
	ep = other.ep;
	dmg = other.dmg;
	return *this;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << name <<
	" derived from ClapTrap " << ClapTrap::name << "!" <<
	std::endl;
}
