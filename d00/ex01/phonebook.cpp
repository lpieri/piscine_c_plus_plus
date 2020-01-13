/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:24:27 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 13:38:15 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.class.hpp"

void	print_usage(void) {
	std::cout << "Phonebook Usage:" << std::endl;
	std::cout << " - ADD for create new user." << std::endl;
	std::cout << " - SEARCH for print all user and selected one." << std::endl;
	std::cout << " - EXIT for quit the phonebook." << std::endl;
}

int		main(void)
{
	std::string	cmd;
	Phonebook	phonebook;

	print_usage();
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, cmd);

		if (cmd == "ADD" || cmd == "add") {
			phonebook.set_new_contact();
		} else if (cmd == "SEARCH" || cmd == "search") {
			phonebook.search();
		} else if (cmd == "EXIT" || cmd == "exit") {
			return (0);
		} else {
			print_usage();
		}
	}
	return (0);
}