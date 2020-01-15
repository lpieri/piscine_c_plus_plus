/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:27:10 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 11:39:29 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon(void) {
}

std::string const	Weapon::getType(void) const {
	return (this->_type);
}

void				Weapon::setType(std::string const type) {
	this->_type = type;
}

