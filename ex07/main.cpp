#include <string>
#include <iostream>
#include <fstream>

const static std::string file_extension = ".replace";

void checkArguments(int ac, char **av) {
	if (ac != 4 || !*av[1] || !*av[2] || !*av[3])
	{
		std::cout << "Usage: " << av[0] << " FILE SEARCH REPLACE" << std::endl;
		std::cout << "The result will be written to FILE" << file_extension << std::endl;
		exit(1);
	}
}

void replaceAll(std::istream &input, std::ofstream &output, std::string &search, std::string &replace)
{
	int searchLength = search.length();
	int replaceLength = replace.length();

	std::string line;
	while (getline(input, line)) {
		std::size_t index = 0;
		while ((index = line.find(search, index)) != std::string::npos)
		{
			line.replace(index, searchLength, replace);
			index += replaceLength;
		}
		output << line;
		if (!input.eof())
			output << '\n';
	}
}

int main(int ac, char **av)
{
	checkArguments(ac, av);
	std::string inputFile = av[1];
	std::string outputFile = inputFile + file_extension;

	std::ifstream input(inputFile);
	if (!input.is_open())
	{
		std::cout << "Unable to open " << inputFile << std::endl;
		return (1);
	}
	std::ofstream output(outputFile);
	if (!output.is_open())
	{
		input.close();
		std::cout << "Unable to open " << outputFile << std::endl;
		return (1);
	}

	std::string search = av[2];
	std::string replace = av[3];
	replaceAll(input, output, search, replace);
	input.close();
	output.close();
	return (0);
}