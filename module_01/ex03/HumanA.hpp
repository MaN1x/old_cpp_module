/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:06:41 by maxim             #+#    #+#             */
/*   Updated: 2022/05/10 22:06:41 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		void attack(void);
		HumanA(std::string name, Weapon weapon);
		void setWeapon(Weapon weapon);

	private:
		std::string name;
		Weapon		weapon;
};


#endif
