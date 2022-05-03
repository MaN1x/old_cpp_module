/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:56:33 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 14:56:33 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
