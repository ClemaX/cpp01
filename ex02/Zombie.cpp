#include <Zombie.hpp>

std::ostream &operator << (std::ostream &os, const Zombie &z)
{
	os << '<' << z.name << " (" << z.type << ")>";
	return (os);
}

void Zombie::announce(void) {
	std::cout << *this << " Braiiiiiiinnnssss..." << std::endl;
}