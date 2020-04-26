#include <HumanA.hpp>

HumanA::HumanA(std::string name, const Weapon &weapon)
	: weapon(weapon), name(name)
{
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}