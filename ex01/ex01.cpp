#include <string>
#include <iostream>

void memoryLeak(void) {
	std::string *panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete(panther);
}

int main(void) {
	memoryLeak();
	std::cout << "Press enter to continue...";
	getchar();
	return (0);
}
