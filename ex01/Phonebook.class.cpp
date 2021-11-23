#include "Phonebook.class.hpp"

Phonebook::Phonebook() : _count(0) {

}

Phonebook::~Phonebook() {
}

bool Phonebook::add(){
	if (this->_count == 8)
		std::cout << "Phonebook is full!" << std::endl;
	else if (this->_contacts[this->_count].setData())
		this->_count++;
	else
		return (false);
	return (true);
}

void Phonebook::_putHeader() {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (long i = 0; i < (long) this->_count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		this->_contacts[i].putAllData();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Phonebook::_searchContact() {
	long index;

	std::cout << "# Enter Index to display Data or 0 to Exit\n~ ";
	while (!(std::cin >> index) || (index <= 0 || index > (long) this->_count))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "# Invalid Index" << std::endl;
		if (std::cin.eof())
			return;
		std::cout << "~";
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (index > 0)
		this->_contacts[index - 1].putData();
}

void Phonebook::search() {
	if (!Phonebook::_count)
		std::cout << "# Add a contact before searching!" << std::endl;
	else
	{
		_putHeader();
		_searchContact();
	}
}