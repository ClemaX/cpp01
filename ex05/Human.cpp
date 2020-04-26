#include <Human.hpp>

Human::Human(void)
{
	std::cout << "Creating Human!" << std::endl;
	brain.think();
}

Human::~Human(void)
{
	std::cout << "Destroying Human!" << std::endl;
}

std::string Human::identify(void)
{
	return (brain.identify());
}

Brain &Human::getBrain(void)
{
	return (brain);
}