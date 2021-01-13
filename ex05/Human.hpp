#pragma once

#include "Brain.hpp"

class Human
{
private:
	const Brain brain;
public:
	Human();
	~Human();

	Human(const Human &val);

	Human &operator=(const Human &val);

	std::string identify(void);
	const Brain &getBrain(void) const;
};
