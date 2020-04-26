#include <HumanB.hpp>

HumanB::HumanB(std::string name)
	: name(name)
{
}

void HumanB::setWeapon(Weapon &value)
{
	weapon = &value;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}