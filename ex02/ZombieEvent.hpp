#pragma once

#include <Zombie.hpp>
#include <cstdlib>

class ZombieEvent {
private:
	static const std::string	names[];
	static const size_t			name_count;
	std::string					type;

public:
	ZombieEvent();
	~ZombieEvent();

	ZombieEvent(std::string type);
	ZombieEvent(const ZombieEvent &val);

	ZombieEvent &operator=(const ZombieEvent &val);

	void	setZombieType(std::string value);

	Zombie	*newZombie(std::string name) const;

	void	randomChump(void) const;
};
