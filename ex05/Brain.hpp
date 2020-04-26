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

	const std::string identify(void) const;
	void think(void) const;
};


#endif