/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 08:43:48 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/24 10:21:34 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <list>
#include <vector>

void	print(int i) {
	std::cout << i << std::endl;
}

int		main(void) {
	std::list<int>		a;
	std::list<int>::iterator it0;
	std::vector<int>::iterator it1;
	std::vector<int>	b;

	a.push_back(0);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(42);
	b.push_back(0);
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(42);
	try
	{
		std::cout << "try to find 42 in b" << std::endl;
		easyfind(b, 42);
		std::cout << "try to find 101 in a" << std::endl;
		easyfind(a, 101);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}