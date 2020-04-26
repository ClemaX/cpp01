#ifndef HUMAN_H
# define HUMAN_H

# include <Brain.hpp>

class Human
{
private:
	Brain brain;
public:
	Human();
	~Human();

	std::string identify(void);
	Brain &getBrain(void);
};

#endif