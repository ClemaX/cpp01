#include <Pony.hpp>

void Pony::identify(void)
{
	std::cout << "Hi I'm " << name << "!" << std::endl;
	std::cout << "I'm a " << age << " years old pure-bred " << color << " " << breed << "." << std::endl;
	if (!hypoallergenic)
		std::cout << "Sure hope you're not allergic to horses!" << std::endl;
}

Pony::Pony()
{
	std::cout << "Creating pony!" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destroying pony!" << std::endl;
}