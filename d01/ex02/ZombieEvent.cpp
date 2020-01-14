/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:51:59 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 19:20:23 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string		g_name[10] = {"Lilou", "Andrew", "Blade", "Clove", "Damp", "Era", "Flung", "Getty", "Ham", "Ida"};

ZombieEvent::ZombieEvent(void) : _type("normal") {
}

ZombieEvent::~ZombieEvent(void) {
}

void			ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie*			ZombieEvent::newZombie(std::string name) {
	Zombie*		zombie = new Zombie(name, this->_type);
	return (zombie);
}

void			ZombieEvent::randomChump(void) {
	std::string	randomName = g_name[rand() % 10];
	Zombie		randomZombie(randomName, this->_type);

	randomZombie.announce();
}
