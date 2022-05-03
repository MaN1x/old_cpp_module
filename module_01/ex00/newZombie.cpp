//
// Created by maxim on 03.05.2022.
//

#include "Zombie.hpp"
#include <string>

Zombie* newZombie( std::string name )
{
	return (new Zombie(name));
}
