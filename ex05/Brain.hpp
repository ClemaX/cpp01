#pragma once

#include <iostream>
#include <random>
#include <sstream>

class Brain
{
private:
	static const std::string thoughts[];

public:
	Brain(void);
	~Brain(void);

	Brain(const Brain &val);

	Brain	&operator=(const Brain &val);

	const std::string identify(void) const;
	void think(void) const;
};
