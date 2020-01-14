/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:40:17 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 20:33:35 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string		g_name[10] = {"Lilou", "Andrew", "Blade", "Clove", "Damp", "Era", "Flung", "Getty", "Ham", "Ida"};

Zombie::Zombie() : _type("normal") {
	this->_name = g_name[rand() % 10];
	std::cout << "A new zombie (" << this->_type << ") has born now, he name is " << this->_name << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "The zombie (" << this->_type << ") with name " << this->_name << " are dead" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss..." << std::endl;
}
