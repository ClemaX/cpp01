#include "HumanA.hpp"

HumanA::~HumanA()
{
	std::cout << "Destroying HumanA '" << name << "'!" << std::endl;
}

HumanA::HumanA(std::string name, const Weapon &weapon)
	:	name(name), weapon(weapon)
{
	std::cout << "Creating HumanA '" << name << "'!" << std::endl;
}

void HumanA::attack(void) const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
