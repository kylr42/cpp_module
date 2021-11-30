#include "Contact.class.hpp"

std::string Contact::_dataName[11] = {
		"First Name",
		"Last Name",
		"Nickname",
		"Login",
		"Address",
		"E-mail",
		"Phone",
		"Birthday",
		"Favorite Meal",
		"Underwear Color",
		"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= Secret; i++)
		this->_data[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::setData() {
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::_dataName[i] << ":\n+ ";
		std::getline(std::cin, this->_data[i]);
		if (std::cin.eof())
			return (false);
	}
	return (true);
}

void Contact::putData(){
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::_dataName[i] << ": ";
		std::cout << Contact::_data[i] << std::endl;
	}
}

void Contact::putAllData() {
	for (int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->_data[i].length() > 10)
			std::cout << this->_data[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_data[i];
	}
	std::cout << "|" << std::endl;
}