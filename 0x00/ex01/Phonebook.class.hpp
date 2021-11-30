#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook {
private:
	size_t	_count;
	Contact	_contacts[8];

	void _putHeader();
	void _searchContact();

public:
	Phonebook();
	~Phonebook();

	bool add();
	void search();
};


#endif //PHONEBOOK_CLASS_HPP
