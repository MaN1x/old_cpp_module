/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:46 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 15:04:46 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:

	Zombie();

	Zombie(std::string name);
	~Zombie();
	void set_name(std::string name);
	std::string get_name();
	void announce(void);

private:
	std::string name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
