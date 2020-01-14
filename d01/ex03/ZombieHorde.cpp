/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:27:04 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 20:36:37 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _nbOfZombies(n) {
	this->_zombies = new Zombie[n];
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_zombies;
}

void		ZombieHorde::announce(void) const {
	for (int i = 0; i < this->_nbOfZombies; i++)
	{
		this->_zombies[i].announce();
	}

}