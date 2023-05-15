#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Foo");

	a.attack("Bar");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Baz");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Bazz");
	b.beRepaired(3);
	std::cout << std::endl;
	ScavTrap c;
	ScavTrap d("Bar");

	c.attack("Baz");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("Bazz");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("Baz");
	std::cout << std::endl;
	FragTrap e;
	FragTrap f("Foooz");

	e.highFiveGuys();
	e.attack("Baz");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("Baz");
	f.highFiveGuys();
	std::cout << std::endl;
	DiamondTrap g;
	DiamondTrap h("Barr");
	DiamondTrap i(g);

	g.whoAmI();
	g.attack("Bazz");
	h.whoAmI();
	h.attack("Baz");
	i.whoAmI();
	return (0);
}
