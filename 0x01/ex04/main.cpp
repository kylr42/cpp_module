#include "file.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4) {
		std::cerr << RED << "Er.: Usage: " << argv[0]
				  << " filename [s1] [s2]" << std::endl;
		return (1);
	}

	File file(argv[1]);

	try {
		file.replace(argv[2], argv[3]);
	}
	catch (char *error) {
		std::cerr << RED << "Er.: " << error << std::endl;
	}
	return (0);
}