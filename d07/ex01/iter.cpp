/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:49:52 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/22 17:20:40 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T, typename T2>
void	iter(T * array, size_t length, void (*f)(T2)) {
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template<typename P>
void	printIter(P toPrint) {
	std::cout << toPrint <<  std::endl;
}

template<typename C>
void	changeValNumberBy42(C & valToChange) {
	valToChange = 42;
}

int		main(void) {
	int				array1[3] = {21, 42, 84};
	std::string		array2[5] = {"T", "R", "A", "N", "S"};
	float			array3[3] = {2.1, 4.2, 8.4};

	iter<int, int const &>(array1, 3, &printIter<int const &>);
	std::cout << std::endl;
	iter<std::string, std::string const &>(array2, 5, &printIter<std::string const &>);
	std::cout << std::endl;
	iter<int, int &>(array1, 3, &changeValNumberBy42<int &>);
	iter<int, int const &>(array1, 3, &printIter<int const &>);
	std::cout << std::endl;
	iter<float, float const &>(array3, 3, &printIter<float const &>);
	iter<float, float &>(array3, 3, &changeValNumberBy42<float &>);
	iter<float, float const &>(array3, 3, &printIter<float const &>);
	return (0);
}