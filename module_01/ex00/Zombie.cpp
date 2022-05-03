//
// Created by maxim on 02.05.2022.
//

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
