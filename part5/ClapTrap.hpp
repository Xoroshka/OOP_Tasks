#pragma once
#include <string>

class ClapTrap
{
	protected:
		std::string		name;
		unsigned int	hp;
		unsigned int	ep;
		unsigned int	dmg;

	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		
		virtual ~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};