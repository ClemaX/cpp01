#include "Weapon.hpp"

Weapon::Weapon()
	: type("")
{
	std::cout << "Creating empty Weapon!" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destroying Weapon of type " << type << "!" << std::endl;
}

Weapon::Weapon(std::string typeValue)
	: type(typeValue)
{
	std::cout << "Creating Weapon of type " << type << "!" << std::endl;
}

const std::string &Weapon::getType(void) const
{
	return (type);
}

void Weapon::setType(std::string value)
{
	type = value;
}
