#include <Pony.hpp>
#include <stack>

Pony *ponyOnTheHeap(void) {
	Pony *heapPony = new Pony();

	heapPony->age = 2;
	heapPony->breed = "Heap-allocated Object";
	heapPony->color = "Chestnut";
	heapPony->name = "Hidalgo";
	heapPony->hypoallergenic = false;

	heapPony->identify();

	delete(heapPony);

	return (heapPony);
}

Pony ponyOnTheStack(void) {
	Pony stackPony = Pony();

	stackPony.age = 1;
	stackPony.breed = "Stack-allocated Object";
	stackPony.color = "Pink";
	stackPony.name = "Starlight";
	stackPony.hypoallergenic = true;

	stackPony.identify();

	return (stackPony);
}

int main(void) {
	Pony *heapPony = ponyOnTheHeap();
	Pony stackPony = ponyOnTheStack();
	
	// TODO: Prove they're gone
}