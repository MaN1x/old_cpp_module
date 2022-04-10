//
// Created by maxim on 10.04.2022.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
public:
	void addContact();
	PhoneBook();
private:
	int		index;
	Contact	contacts[8];
};

#endif
