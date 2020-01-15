/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:28:51 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 11:43:54 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name (name) {
}

HumanA::~HumanA(void) {
}

void			HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}