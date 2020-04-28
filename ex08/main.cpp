#include "Human.hpp"

int main(void) {
	Human human;

	human.action("meleeAttack", "Link");
	human.action("rangedAttack", "Kirby");
	human.action("intimidatingShout", "D.K.");
	return (0);
}