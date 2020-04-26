#include <ZombieEvent.hpp>
#include <ctime>

Zombie::Zombie(void) {
	std::cout << "New Zombie!" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Destroying " << name << '!' << std::endl;
}

int main(void) {
	ZombieEvent zEvent = ZombieEvent();
	srand(time(NULL));

	zEvent.setZombieType("Random");
	zEvent.randomChump();

	zEvent.setZombieType("Brainiac");
	Zombie *z = zEvent.newZombie("Mark");
	z->announce();
	delete(z);

	return (0);
}