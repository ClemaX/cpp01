#include <ZombieHerd.hpp>

int main(void)
{
	srand(time(NULL));
	ZombieHerd zombies = ZombieHerd(13);

	zombies.announce();
	return (0);
}
