#include <ZombieEvent.hpp>
#include <ctime>

int main(void)
{
	ZombieEvent zEvent = ZombieEvent();
	srand(time(NULL));

	zEvent.setZombieType("Random");
	zEvent.randomChump();

	zEvent.setZombieType("Brainiac");
	Zombie *z = zEvent.newZombie("Mark");
	z->announce();
	delete (z);

	return (0);
}