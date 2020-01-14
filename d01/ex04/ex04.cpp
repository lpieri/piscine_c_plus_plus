/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:39:49 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 20:42:20 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string&	strRef = str;
	std::string*	strPtr = &str;

	std::cout << "Print string with strPtr: " << *strPtr << std::endl;
	std::cout << "Print string with strRef: " << strRef << std::endl;
	return (0);
}