#pragma once

#include <iostream>

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	const Weapon &weapon;

public:
	~HumanA();

	HumanA(std::string n, const Weapon &w);
	HumanA(const HumanA &val);

	HumanA	&operator=(const HumanA &val);

	void attack(void) const;
};
