#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <Weapon.hpp>
# include <iostream>

class HumanB
{
private:
	std::string name;
	const Weapon *weapon;

public:
	HumanB(std::string name);

	void setWeapon(Weapon &value);
	void attack(void);
};

# endif