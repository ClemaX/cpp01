#pragma once

#include "Zombie.hpp"

class ZombieHerd
{
private:
	static const std::string	names[];
	int							nbZombies;
	Zombie						*zombies;

public:
	ZombieHerd();
	~ZombieHerd();

	ZombieHerd(int N);
	ZombieHerd(const ZombieHerd &val);

	ZombieHerd	&operator=(const ZombieHerd &val);

	void announce(void) const;
};
