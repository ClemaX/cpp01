#include <Weapon.hpp>

Weapon::Weapon(std::string typeValue)
	: type(typeValue)
{
}

const std::string &Weapon::getType(void) const
{
	return (type);
}

void Weapon::setType(std::string value)
{
	type = value;
}