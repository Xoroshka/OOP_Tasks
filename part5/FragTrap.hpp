#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap &src);

		virtual ~FragTrap();

		void highFiveGuys(void);
};
