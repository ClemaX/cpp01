#include <Human.hpp>

int main(void)
{
	std::srand(time(NULL));
	Human bob = Human();

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}