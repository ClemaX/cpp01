#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Creating Human!" << std::endl;
	brain.think();
}

Human::~Human(void)
{
	std::cout << "Destroying Human!" << std::endl;
}

Human::Human(const Human &val)
	: brain(val.brain)
{

}

Human &Human::operator=(const Human &val)
{
	(void) val;
	return (*this);
}

std::string Human::identify(void)
{
	return (brain.identify());
}

const Brain &Human::getBrain(void) const
{
	return (brain);
}
