#include "Converter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		std::cout << "Er.: Usage: " << argv[0] << " [arg]" << std::endl;
	else
	{
		Converter converter(argv[1]);
		converter();
	}

	return (0);
}