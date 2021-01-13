#include "HumanB.hpp"

HumanB::HumanB()
	:	name(""), weapon(new Weapon())
{
	std::cout << "Creating empty HumanB!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destroying HumanB '" << name << "'!" << std::endl;
}

HumanB::HumanB(std::string name)
	:	name(name)
{
	std::cout << "Creating HumanB '" << name << "'!" << std::endl;
}

void HumanB::setWeapon(Weapon &value)
{
	weapon = &value;
}

void HumanB::attack(void) const
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
