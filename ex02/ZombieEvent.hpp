#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include <Zombie.hpp>
# include <array>
# include <cstdlib>

class ZombieEvent {
public:
	void setZombieType(std::string value);

	Zombie *newZombie(std::string name);

	void randomChump(void);

private:
	std::string type;
};

#endif