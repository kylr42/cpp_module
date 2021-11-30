#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen tmp = Karen();

	if (argc == 2)
		tmp.complain(argv[1]);
	else
		std::cerr << RED << "Er.: Usage: " << argv[0]
				  << " [level]" << RESET << std::endl;
	return (0);
}