#include <ZombieEvent.hpp>

Zombie::Zombie(void) {
	std::cout << "New Zombie!" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Destroying " << name << '!' << std::endl;
}

int main(void) {
	ZombieEvent zEvent = ZombieEvent();

	zEvent.setZombieType("Random");
	zEvent.randomChump();

	zEvent.setZombieType("Brainiac");
	Zombie *z = zEvent.newZombie("Mark");
	z->announce();
	delete(z);

	return (0);
}