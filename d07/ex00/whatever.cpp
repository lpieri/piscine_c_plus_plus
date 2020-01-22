/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:57:50 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/22 16:46:32 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T1>
T1 const &	max(T1 const & x, T1 const & y) {
	return (x >= y ? x : y);
}

template<typename T2>
T2 const &	min(T2 const & x, T2 const & y) {
	return (x <= y ? x : y);
}

template<typename T3>
void	swap(T3 & x, T3 & y) {
	T3		tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int		main(void) {
	int a = 21;
	int b = 42;
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap<int>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min<int>(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max<int>(a, b) << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	return (0);
}