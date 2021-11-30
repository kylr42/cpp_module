#include "Karen.hpp"

int main(int argc, char **argv)
{
	int level = -1;
	Karen tmp = Karen();
	std::string levels[4] = {"debug", "info", "warning", "error"};

	if (argc == 2)
	{
		for (int i = 0; i < levels->length() - 1; i++)
			if (levels[i] == argv[1])
				level = i;
		for (int i = level; i < levels->length() - 1; i++)
			tmp.complain(levels[i]);
		if (level != -1)
			return (0);
	}
	tmp.complain("");
	return (1);
}