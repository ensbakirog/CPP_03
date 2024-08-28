#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap empty;
	std::cout << std::endl;

	ClapTrap theOne("Neo");
	std::cout << std::endl;

	std::cout << theOne.getName() << std::endl;
	std::cout << std::endl;

	ClapTrap copy(theOne);
	std::cout << std::endl;

	empty = copy;
	std::cout << std::endl;

	empty.attack("Jack");
	std::cout << std::endl;

	empty.takeDamage(100);
	std::cout << std::endl;

	empty.takeDamage(100);
	std::cout << std::endl;

	empty.beRepaired(20);
	std::cout << std::endl;
	
	ClapTrap last("Logan");
	std::cout << std::endl;

	std::cout << last.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << last.getHitPoints() << std::endl;
	std::cout << std::endl;

	last.beRepaired(20);
	std::cout << std::endl;

	std::cout << last.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	std::cout << last.getHitPoints() << std::endl;
	std::cout << std::endl;
	
	return 0;
}