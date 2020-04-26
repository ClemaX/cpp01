#include <Brain.hpp>

std::array<std::string, 6> Brain::thoughts = {
	"When you're a kid, you don't realize you're also watching your mom and dad grow up.",
	"Everyone hates being sung happy birthday, and everyone hates singing happy birthday, so what the fuck are we doing here.",
	"The biggest flex is using mobile data in your own home because the WiFi is being slow.",
	"Anxiety is like when video game combat music is playing but you can't find any enemies.",
	"If elevators hadn't been invented, all the CEOs and important people would have their offices on the first floor as a sign of status.",
	"Pavlov probably thought about feeding his dogs every time someone rang a bell."};

std::string Brain::identify(void)
{
	std::ostringstream ss;

	ss << this;

	return (ss.str());
}

void Brain::think(void)
{
	std::cout << "( ु⁎ᴗ_ᴗ⁎)ु.｡oO(" << thoughts[rand() % thoughts.size()] << ')' << std::endl;
}

Brain::Brain(void)
{
	std::cout << "Creating brain!" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Destroying brain!" << std::endl;
}