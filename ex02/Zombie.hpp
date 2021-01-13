#pragma once

#include <string>
#include <iostream>

class Zombie
{
public:
	std::string type;
	std::string name;

	Zombie();
	~Zombie();

	Zombie(std::string type, std::string name);
	Zombie(const Zombie &val);

	Zombie &operator=(const Zombie &val);

	void announce(void) const;
};

