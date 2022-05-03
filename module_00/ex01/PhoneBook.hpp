/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:56:45 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 14:56:45 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
