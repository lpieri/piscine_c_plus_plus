/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:30:05 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 11:46:19 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::~HumanB(void) {
}

void			HumanB::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void			HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}