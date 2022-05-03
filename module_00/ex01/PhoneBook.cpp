/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:56:41 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 14:56:41 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() {
	index = 0;
}

void	PhoneBook::print_contact_info(int index) {
	if (PhoneBook::contacts[index].get_first_name().empty())
		std::cout << "index out of range" << std::endl;
	else
	{
		std::cout << "first name: " << PhoneBook::contacts[index].get_first_name() << std::endl;
		std::cout << "last name: " << PhoneBook::contacts[index].get_last_name() << std::endl;
		std::cout << "nickname: " << PhoneBook::contacts[index].get_nickname() << std::endl;
		std::cout << "phone number: " << PhoneBook::contacts[index].get_phone_number() << std::endl;
		std::cout << "darkest secret: " << PhoneBook::contacts[index].get_darkest_secret() << std::endl;
	}
}

void	PhoneBook::print_contact_list() {
	int i;

	i = 0;
	std::cout << "|";
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;

	while (i < 8)
	{
		if (PhoneBook::contacts[i].get_first_name().empty())
			break;
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		PhoneBook::print_contact_field(PhoneBook::contacts[i].get_first_name());
		PhoneBook::print_contact_field(PhoneBook::contacts[i].get_last_name());
		PhoneBook::print_contact_field(PhoneBook::contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::print_contact_field(std::string str) {
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void	PhoneBook::search() {
	std::string	index;

	print_contact_list();
	std::cout << ">";
	while (std::getline(std::cin, index) && !(index[0] >= '0' && index[0] <= '7' && index[1] == '\0'))
		std::cout << ">";
	print_contact_info(index[0] - '0');
}

void	PhoneBook::addContact() {
	std::string buffer;

	std::cout << "First Name:" << std::endl;
	std::cout << ">";
	std::getline(std::cin, buffer);
	contacts[index].set_first_name(buffer);

	std::cout << "Last Name:" << std::endl;
	std::cout << ">";
	std::getline(std::cin, buffer);
	contacts[index].set_last_name(buffer);

	std::cout << "Nickname:" << std::endl;
	std::cout << ">";
	std::getline(std::cin, buffer);
	contacts[index].set_nickname(buffer);

	std::cout << "Phone number:" << std::endl;
	std::cout << ">";
	std::getline(std::cin, buffer);
	contacts[index].set_phone_number(buffer);

	std::cout << "Darkest secret:" << std::endl;
	std::cout << ">";
	std::getline(std::cin, buffer);
	contacts[index].set_darkest_secret(buffer);

	index == 7 ? index = 0 : index++;
}
