/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:39:37 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/24 17:04:45 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	std::list<int>			lol;

	{
		std::cout << "[MutantStack main test]:" << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737); //[...] mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::stack<int> s(mstack);
	}
	{
		std::cout << "[list main test]:" << std::endl;
		lol.push_back(5);
		lol.push_back(17);
		std::cout << lol.back() << std::endl;
		lol.pop_back();
		std::cout << lol.size() << std::endl;
		lol.push_back(3);
		lol.push_back(5);
		lol.push_back(737); //[...] lol.push_back(0);
		std::list<int>::iterator it = lol.begin();
		std::list<int>::iterator ite = lol.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::list<int> s(lol);
	}
	return (0);
}