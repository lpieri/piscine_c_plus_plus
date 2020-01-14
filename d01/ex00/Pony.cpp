/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:30:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 15:43:53 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name_of_pony, std::string type) : _name(name_of_pony), _type(type) {
	std::cout << "New pony pop in the world, they name is " << this->_name << std::endl;
	if (this->_type == "Licorne") {
		std::cout << "Oh... " << this->_name << " is a licorne, it's so magic !!" << std::endl;
	}
}

Pony::~Pony(void) {
	std::cout << "Oh no it's so sad the pony " << this->_name << " it's dead" << std::endl;
}

void	Pony::do_magic(void) const {
	if (this->_type == "Licorne") {
		std::cout << "The licorne " << this->_name << " print a beautiful rainbow" << std::endl;
	} else {
		std::cout << this->_name << " it's just a single pony doesn't magic :(!!" << std::endl;
	}
}