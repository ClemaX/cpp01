#include <ZombieHerd.hpp>

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
	"Ellie-May"};

ZombieHerd::ZombieHerd(int N)
{
	nbZombies = N;
	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].type = "Dynamic Zombie";
		zombies[i].name = names[rand() % names.size()];
	}
}

ZombieHerd::~ZombieHerd(void)
{
	delete[] zombies;
}

void ZombieHerd::announce(void)
{
	for (int i = 0; i < nbZombies; i++)
		zombies[i].announce();
}