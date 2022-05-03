/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:55:22 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 14:55:22 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
