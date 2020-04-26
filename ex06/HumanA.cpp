#include <HumanA.hpp>

HumanA::HumanA(std::string name, const Weapon &weapon)
	: name(name), weapon(weapon)
{
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}