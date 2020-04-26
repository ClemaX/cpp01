#ifndef ZOMBIE_HERD_H
# define ZOMBIE_HERD_H

# include <Zombie.hpp>
# include <array>

class ZombieHerd
{
public:
	ZombieHerd(int N);
	~ZombieHerd(void);

	void announce(void);

private:
	int nbZombies;
	Zombie *zombies;
};

#endif