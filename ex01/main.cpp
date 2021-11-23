#include "Phonebook.class.hpp"

int main()
{
	bool	status;
	Phonebook	pb;
    std::string	tmp;

	status = true;
    while (status)
    {
        std::cout << "# Enter your command [ADD, SEARCH, EXIT]: ";
        std::getline(std::cin, tmp);

		if (tmp == "ADD")
			status = pb.add();
		else if (tmp == "SEARCH")
			pb.search();
		if (std::cin.eof() || tmp == "EXIT")
			status = false;
	}
	if (std::cin.eof())
		std::cout << std::endl;
    return (0);
}