#ifndef HUMAN_H
# define HUMAN_H

# include <Brain.hpp>

class Human
{
private:
	const Brain brain;
public:
	Human();
	~Human();

	std::string identify(void);
	const Brain &getBrain(void) const;
};

#endif