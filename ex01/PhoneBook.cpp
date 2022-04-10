//
// Created by maxim on 10.04.2022.
//

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook() {
	index = 0;
}

void	PhoneBook::addContact()
{
	std::string buffer;

	std::cout << "First Name:" << std::endl;
	std::cin >> buffer;
	contacts[index].set_first_name(buffer);

	std::cout << "Last Name:" << std::endl;
	std::cin >> buffer;
	contacts[index].set_last_name(buffer);

	std::cout << "Nickname:" << std::endl;
	std::cin >> buffer;
	contacts[index].set_nickname(buffer);

	std::cout << "Phone number:" << std::endl;
	std::cin >> buffer;
	contacts[index].set_phone_number(buffer);

	std::cout << "Darkest secret:" << std::endl;
	std::cin >> buffer;
	contacts[index].set_darkest_secret(buffer);

	index == 7 ? index = 0 : index++;
}
