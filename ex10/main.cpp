#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

void cat(std::istream &input)
{
	std::string line;
	// TODO: Do not wait for new line
	while (getline(input, line))
	{
		std::cout << line;
		if (!input.eof())
			std::cout << std::endl;
	}
}

int main(int ac, char **av)
{
	int err = 0;

	if (ac == 1)
		cat(std::cin);
	else
	{
		std::ifstream file;
		for (int i = 1; i < ac; i++)
		{
			file.open(av[i]);
			if (file.is_open())
			{
				cat(file);
				file.close();
			}
			else
			{
				err = 1;
				std::cout << av[0] << ": ";
				std::cout << av[i] << ": ";
				std::cout << std::strerror(errno) << std::endl;
			}
		}
	}
	return (err);
}