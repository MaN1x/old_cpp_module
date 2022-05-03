/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxim <maxim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:56:15 by maxim             #+#    #+#             */
/*   Updated: 2022/05/03 14:56:15 by maxim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void str_up(char **str)
{
	int i;

	i = strlen(*str);
	while (i-- > 0)
	{
		if ((*str)[i] >= 'a' && (*str)[i] <= 'z')
			(*str)[i] = (*str)[i] - ' ';
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while(argc-- > 1)
		{
			str_up(&argv[1]);
			std::cout << argv[1];
			argv++;
		}
	}
	std::cout << std::endl;
	return(0);
}

