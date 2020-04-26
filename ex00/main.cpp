#include <Pony.hpp>
#include <stack>

void ponyOnTheHeap(void)
{
	Pony *heapPony = new Pony();

	heapPony->age = 2;
	heapPony->breed = "Heap-allocated Object";
	heapPony->color = "chestnut";
	heapPony->name = "Hidalgo";
	heapPony->hypoallergenic = false;

	heapPony->identify();

	delete (heapPony);
}

void ponyOnTheStack(void)
{
	Pony stackPony = Pony();

	stackPony.age = 1;
	stackPony.breed = "Stack-allocated Object";
	stackPony.color = "pink";
	stackPony.name = "Starlight";
	stackPony.hypoallergenic = true;

	stackPony.identify();
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}