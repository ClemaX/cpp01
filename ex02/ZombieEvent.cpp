#include <ZombieEvent.hpp>

ZombieEvent::ZombieEvent()
	: type("")
{
	std::cout << "Creating ZombieEvent!" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "Destroying ZombieEvent!" << std::endl;
}

ZombieEvent::ZombieEvent(std::string type)
	: type(type)
{
	std::cout << "Creating ZombieEvent!" << std::endl;
}

ZombieEvent	&ZombieEvent::operator=(const ZombieEvent &val)
{
	type = val.type;
	return (*this);
}

void ZombieEvent::setZombieType(std::string value)
{
	type = value;
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
	Zombie *z = new Zombie(type, name);

	return (z);
}

const std::string ZombieEvent::names[] = {
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

void ZombieEvent::randomChump(void) const
{
	const size_t random_index = rand() % (sizeof(names) / sizeof(*names));
	const Zombie z = Zombie(type, names[random_index]);

	z.announce();
}
