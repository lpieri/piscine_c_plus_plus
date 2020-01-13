/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:16:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/13 12:41:51 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	to_upper_case(char s)
{
	if (s >= 'a' && s <= 'z')
		return (s - 32);
	return (s);
}

int		main(int ac, char **av)
{
	int		y;
	int		i = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		y = 0;
		while (av[i][y])
		{
			std::cout << to_upper_case(av[i][y]);
			y++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}