//
// Created by maxim on 03.05.2022.
//

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *tmp;

	tmp = newZombie(name);
	tmp->announce();
	delete tmp;
}
