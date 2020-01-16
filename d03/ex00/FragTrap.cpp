/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/16 13:47:24 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _name("default"),
_hit_points(100),
_max_hit_points(100),
_energy_points(100),
_max_energy_points(100),
_level(1),
_melee_attack_damage(30),
_ranged_attack_damage(20),
_armor_damage_reduction(5) {
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
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
}

FragTrap::~FragTrap(void) {
}

std::string		FragTrap::getName(void) const {
	return (this->_name);
}

void			FragTrap::rangedAttack(std::string const & target) {
	std::cout << std::endl;
}

void			FragTrap::meleeAttack(std::string const & target) {
	std::cout << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount) {
	std::cout << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount) {
	std::cout << std::endl;
}
