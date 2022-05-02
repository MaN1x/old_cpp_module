//
// Created by maxim on 10.04.2022.
//

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
	bool is_run;
	std::string command;
	PhoneBook phoneBook;

	is_run = true;
	while (is_run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "EXIT")
			is_run = false;
		else if (command == "SEARCH")
			phoneBook.search();
	}
	return (0);
}
