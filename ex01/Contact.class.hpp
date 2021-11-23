#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Contact
{
private:
    std::string _data[11];
	static std::string _dataName[11];

	enum Fields {
		FirstName,
		LastName,
		Nickname,
		Login,
		Address,
		Email,
		Phone,
		Birthday,
		FavoriteMeal,
		UnderwearColor,
		Secret
	};

public:
    Contact();
    ~Contact();

	bool setData();
	void putData();
	void putAllData();

};

#endif //CONTACT_CLASS_HPP
