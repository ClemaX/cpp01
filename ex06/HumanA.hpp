#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <Weapon.hpp>
# include <iostream>

class HumanA
{
private:
	std::string name;
	const Weapon &weapon;

public:
	HumanA(std::string n, const Weapon &w);

	void attack(void);
};

# endif