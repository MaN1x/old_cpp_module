//
// Created by maxim on 10.04.2022.
//

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
	int is_run;
	std::string command;
	const std::string command_ADD = "ADD";
	const std::string command_EXIT = "EXIT";
	const std::string command_SEARCH = "SEARCH";
	PhoneBook phoneBook;

	is_run = 1;
	while (is_run)
	{
		std::cout << ">";
		std::cin >> command;
		if (command == command_ADD)
			phoneBook.addContact();
		else if (command == command_EXIT)
			is_run = 0;
		else if (command == command_SEARCH)
			phoneBook.search();
	}
	return (0);
}
