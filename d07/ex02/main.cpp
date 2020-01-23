/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 09:11:14 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/23 12:38:37 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iomanip>

int		main(void) {
	Array<uint>			a(42);
	Array<float>		b(5);
	Array<uint>			c(4);
	Array<std::string>	d(5);

	try {
		for (size_t i = 0; i < a.getSize(); i++)
		{
			std::cout << "a[" << std::setw(2) << i << "] val = " << a.getValueArray(i) << std::endl;
		}
		std::cout << "Assigne c->_array = {42...}" << std::endl;
		for (size_t i = 0; i < c.getSize(); i++)
		{
			c.setValueArray(i, 42);
			std::cout << "c[" << std::setw(2) << i << "] val = " << c.getValueArray(i) << std::endl;
		}
		std::cout << "a = c" << std::endl;
		a = c;
		std::cout << "print a value" << std::endl;
		for (size_t i = 0; i < a.getSize(); i++)
		{
			std::cout << "a[" << std::setw(2) << i << "] val = " << a.getValueArray(i) << std::endl;
		}
		std::cout << "print a value" << std::endl;
		for (size_t i = 0; i < b.getSize(); i++)
		{
			std::cout << "b[" << std::setw(2) << i << "] val = " << b.getValueArray(i) << std::endl;
		}
		std::cout << "Assigne b->_array = {4.2...}" << std::endl;
		for (size_t i = 0; i < b.getSize(); i++)
		{
			b.setValueArray(i, 4.2);
			std::cout << "b[" << std::setw(2) << i << "] val = " << b.getValueArray(i) << std::endl;
		}
		std::cout << "print d value" << std::endl;
		for (size_t i = 0; i < d.getSize(); i++)
		{
			std::cout << "d[" << std::setw(2) << i << "] val = " << d.getValueArray(i) << std::endl;
		}
		std::cout << "Assigne d->_array = {T,R,A,N,S}" << std::endl;
		d.setValueArray(0, "T");
		d.setValueArray(1, "R");
		d.setValueArray(2, "A");
		d.setValueArray(3, "N");
		d.setValueArray(4, "S");
		std::cout << "print d value" << std::endl;
		for (size_t i = 0; i < d.getSize(); i++)
		{
			std::cout << "d[" << std::setw(2) << i << "] val = " << d.getValueArray(i) << std::endl;
		}
		std::cout << "Assigne d->_array[42] = {S}" << std::endl;
		d.setValueArray(42, "S");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}