/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:15:50 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 15:15:50 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

void Zombie::announce()
{
	std::cout << "<" <<this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << ">" << " is died" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string Zombie::get_name()
{
	return (this->name);
}

Zombie::Zombie()
{

}
