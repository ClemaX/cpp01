#include "Pony.hpp"

void Pony::identify(void) const
{
	std::cout << "Hi I'm " << name << "!" << std::endl;
	std::cout << "I'm a " << age;
	std::cout << ((age > 1) ? " years" : " year");
	std::cout << " old pure-bred " << color << " " << breed << "." << std::endl;
	if (!hypoallergenic)
		std::cout << "Sure hope you're not allergic to horses!" << std::endl;
}

Pony::Pony(int age, std::string name, std::string breed, std::string color,
		bool hypoallergenic)
	:	age(age),
		name(name),
		breed(breed),
		color(color),
		hypoallergenic(hypoallergenic)
{
	std::cout << "Creating '" << name << "'!" << std::endl;
}

Pony::Pony(const Pony& val)
	:	age(val.age),
		name(val.name),
		breed(val.breed),
		color(val.color),
		hypoallergenic(val.hypoallergenic)
{

}

Pony::Pony()
	:	age(0),
		name(""),
		breed(""),
		color(""),
		hypoallergenic(false)
{
	std::cout << "Creating empty horse!" << std::endl;
}

Pony &Pony::operator=(const Pony &val)
{
	age = val.age;
	name = val.name;
	breed = val.breed;
	color = val.color;
	hypoallergenic = val.hypoallergenic;
	return (*this);
}

Pony::~Pony()
{
	std::cout << "Destroying '" << name << "'!" << std::endl;
}
