//
// Created by maxim on 10.04.2022.
//

#include "Contact.hpp"
#include <string>

void	Contact::set_first_name(std::string str) {
	first_name = str;
}

void	Contact::set_last_name(std::string str) {
	last_name = str;
}

void	Contact::set_nickname(std::string str) {
	nickname = str;
}

void	Contact::set_phone_number(std::string str) {
	phone_number = str;
}

void	Contact::set_darkest_secret(std::string str) {
	darkest_secret = str;
}
