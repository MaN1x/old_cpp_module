/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:04:18 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 15:04:18 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(5, "name");
	for (int i = 0; i < 5; ++i)
		zombies->announce();

	delete[] zombies;
	return (0);
}

