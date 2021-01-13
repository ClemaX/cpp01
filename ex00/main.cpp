#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *heapPony = new Pony(
		2,
		"Heap-allocated Object", "chestnut",
		"Hidalgo",
		false
	);

	heapPony->identify();

	delete (heapPony);
}

void ponyOnTheStack(void)
{
	Pony stackPony = Pony(
		1,
		"Stack-allocated Object",
		"pink",
		"Starlight",
		true
	);

	stackPony.identify();
}

int main(void)
{
	try 
	{
		ponyOnTheHeap();
	}
	catch(std::bad_alloc &ex)
	{
		std::cerr << "Allocation error!" << std::endl;
		return (1);
	}
	ponyOnTheStack();
	return (0);
}
