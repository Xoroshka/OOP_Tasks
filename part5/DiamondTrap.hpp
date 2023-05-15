#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(std::string name);
		DiamondTrap &operator=(const DiamondTrap &src);

		virtual ~DiamondTrap();


		void attack(const std::string &target);
		void whoAmI(void);


};