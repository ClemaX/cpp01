#include <ZombieEvent.hpp>

void ZombieEvent::setZombieType(std::string value) {
	type = value;
}

Zombie *ZombieEvent::newZombie(std::string name) {
	Zombie *z = new Zombie();

	z->name = name;
	z->type = type;

	return (z);
}

std::array<std::string, 10> names = {
	"Johnnie",
	"Ella-Louise",
	"Cerys",
	"Shanice",
	"Frida",
	"Regan",
	"Nana",
	"Niall",
	"Shea",
	"Ellie-May"
};

void ZombieEvent::randomChump(void) {
	Zombie z = Zombie();

	z.name = names[rand() % names.size()];
	z.type = type;
	z.announce();
}