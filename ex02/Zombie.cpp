#include "Zombie.hpp"

Zombie::Zombie(void)
	:	type(""),
		name("")

{
	std::cout << "New Zombie!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << name << '!' << std::endl;
}

Zombie::Zombie(std::string type, std::string name)
	:	type(type),
		name(name)
{
	std::cout << "New Zombie!" << std::endl;
}

Zombie::Zombie(const Zombie &val)
	:	type(val.type),
		name(val.name)
{
	std::cout << "New Zombie!" << std::endl;
}

Zombie &Zombie::operator=(const Zombie &val)
{
	type = val.type;
	name = val.name;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Zombie &z)
{
	os << '<' << z.name << " (" << z.type << ")>";
	return (os);
}

void Zombie::announce(void) const
{
	std::cout << *this << " Braiiiiiiinnnssss..." << std::endl;
}
