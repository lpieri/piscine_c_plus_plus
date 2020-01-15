/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:40:17 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 14:59:26 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "A new zombie (" << this->_type << ") has born now, he name is " << this->_name << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "The zombie (" << this->_type << ") with name " << this->_name << " is dead" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss..." << std::endl;
}
