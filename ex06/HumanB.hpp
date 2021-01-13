#pragma once

#include <iostream>

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	const Weapon *weapon;

public:
	HumanB();
	~HumanB();

	HumanB(std::string name);
	HumanB(const HumanB &val);

	HumanB	&operator=(const HumanB &val);

	void setWeapon(Weapon &value);
	void attack(void) const;
};
