#include "Karen.hpp"

int main()
{
	Karen tmp = Karen();
	std::string levels[] = {"debug", "info", "warning", "error", "sigsegv", "saf"};

	for (unsigned int i = 0; i < 6; i++)
		tmp.complain(levels[i]);
	return (0);
}