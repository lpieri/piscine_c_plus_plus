/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/16 15:38:30 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _name("ClapTrap"),
_hit_points(100),
_max_hit_points(100),
_energy_points(100),
_max_energy_points(100),
_level(1),
_melee_attack_damage(30),
_ranged_attack_damage(20),
_armor_damage_reduction(5) {
	std::cout << "I'm the butt of a pandocorn." << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name),
_hit_points(100),
_max_hit_points(100),
_energy_points(100),
_max_energy_points(100),
_level(1),
_melee_attack_damage(30),
_ranged_attack_damage(20),
_armor_damage_reduction(5) {
	std::cout << "<" << name << "> I'm the butt of a pandocorn." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "Et pan !" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "I am fire, I am death." << std::endl;
}

std::string		FragTrap::getName(void) const {
	return (this->_name);
}

void			FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void			FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FR4G-TP <" << this->_name << "> took " << amount << " points of damage !" << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP <" << this->_name << "> repairs himself by " << amount << " points !" << std::endl;
}
