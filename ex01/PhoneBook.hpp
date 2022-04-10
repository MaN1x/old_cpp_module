//
// Created by maxim on 10.04.2022.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <string>

class PhoneBook {
public:
	void addContact();
	void search();
	void print_contact_list();
	void print_contact_field(std::string str);
	void print_contact_info(int index);
	PhoneBook();
private:
	int		index;
	Contact	contacts[8];
};

#endif
