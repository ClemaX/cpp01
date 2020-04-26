#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <random>
# include <array>
# include <sstream>

class Brain
{
private:
	static std::array<std::string, 6> thoughts;
public:
	Brain(void);
	~Brain(void);

	std::string identify(void);
	void think(void);
};


#endif