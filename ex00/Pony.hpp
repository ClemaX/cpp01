#pragma once

#include <string>
#include <iostream>

class Pony
{
private:
	int age;
	std::string name;
	std::string breed;
	std::string color;
	bool hypoallergenic;

public:

	
	Pony(int age, std::string name, std::string breed, std::string color,
		bool hypoallergenic);

	Pony::Pony(const Pony &val);

	Pony();
	~Pony();

	Pony &operator=(const Pony &val);

	void identify(void) const;
};
