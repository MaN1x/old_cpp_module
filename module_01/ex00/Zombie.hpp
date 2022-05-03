//
// Created by maxim on 02.05.2022.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	void announce(void);
	Zombie(std::string name);
	~Zombie();
private:
	std::string name;


};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
