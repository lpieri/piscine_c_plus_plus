/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:54:33 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 15:55:51 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string* 	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int		main(void) {
	memoryLeak();
	while (1);
	return (0);
}