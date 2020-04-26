#include <Zombie.hpp>

Zombie::Zombie(void)
{
	std::cout << "New Zombie!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << name << '!' << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Zombie &z)
{
	os << '<' << z.name << " (" << z.type << ")>";
	return (os);
}

void Zombie::announce(void)
{
	std::cout << *this << " Braiiiiiiinnnssss..." << std::endl;
}