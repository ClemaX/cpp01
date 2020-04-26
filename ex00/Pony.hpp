#ifndef PONY_H
# define PONY_H

# include <string>
# include <iostream>

class Pony
{
public:
	int age;
	std::string name;
	std::string breed;
	std::string color;
	bool hypoallergenic;

	Pony(void);
	~Pony(void);

	void identify(void);
};

#endif