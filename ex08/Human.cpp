#include "Human.hpp"

typedef void (Human::*Action)(std::string const &);

const std::array<std::string, 3> actionNames = {
	"meleeAttack",
	"rangedAttack",
	"intimidatingShout"};

void Human::meleeAttack(std::string const &target)
{
	std::cout << "meleeAttack on " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "rangedAttack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "intimidatingShout on " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	const Action actions[] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout};

	for (int i = 0; i < 3; i++)
	{
		if (actionNames[i] == action_name)
		{
			(this->*actions[i])(target);
			break;
		}
	}
}
