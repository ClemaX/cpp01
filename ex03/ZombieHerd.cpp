#include <ZombieHerd.hpp>

const std::string ZombieHerd::names[] = {
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

ZombieHerd::ZombieHerd()
	:	nbZombies(0),
		zombies(NULL)
{
	std::cout << "Creating empty ZombieHerd!" << std::endl;
}

ZombieHerd::ZombieHerd(int N)
{
	std::cout << "Creating ZombieHerd!" << std::endl;

	nbZombies = N;
	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].type = "Dynamic Zombie";
		zombies[i].name = names[rand() % (sizeof(names) / sizeof(*names))];
	}
}

ZombieHerd::ZombieHerd(const ZombieHerd &val)
{
	std::cout << "Creating ZombieHerd!" << std::endl;

	nbZombies = val.nbZombies;
	zombies = new Zombie[nbZombies];
	for (int i = 0; i < nbZombies; i++)
		zombies[i] = val.zombies[i];
}

ZombieHerd::~ZombieHerd(void)
{
	std::cout << "Destroying ZombieHerd!" << std::endl;

	delete[] zombies;
}

void ZombieHerd::announce(void) const
{
	for (int i = 0; i < nbZombies; i++)
		zombies[i].announce();
}
