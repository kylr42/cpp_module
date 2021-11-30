#include "Karen.hpp"

int main()
{
	Karen tmp = Karen();
	std::string levels[] = {"debug", "info", "warning", "error"};

	for (unsigned int i = 0; i < levels->length() - 1; i++)
		tmp.complain(levels[i]);
	return (0);
}