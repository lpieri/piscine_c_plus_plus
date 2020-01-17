/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 17:00:54 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <ctime>

NinjaTrap::NinjaTrap(void) : ClapTrap("NinjaTrap") {
	this->_hit_points = this->_max_hit_points = 60;
	this->_energy_points = this->_max_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_hit_points = this->_max_hit_points = 60;
	this->_energy_points = this->_max_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << "<" << name << "> Hey everybody! Check out my package!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src.getName()) {
	std::cout << "<" << src.getName() << "> Hey everybody! Check out my package!" << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "<" << this->_name << "> Hot potato!" << std::endl;
}

void			NinjaTrap::ninjaShoebox(ClapTrap& target) {
	target.takeDamage(1000);
	std::cout << "The ninja " << this->_name << " kill the ClapTrap with a katana " << target.getName() << std::endl;
}
void			NinjaTrap::ninjaShoebox(ScavTrap& target) {
	target.takeDamage(1000);
	std::cout << "The ninja " << this->_name << " kill the ScavTrap with a shuriken " << target.getName() << std::endl;
}
void			NinjaTrap::ninjaShoebox(FragTrap& target) {
	target.takeDamage(1000);
	std::cout << "The ninja " << this->_name << " kill the FragTrap with a kunai " << target.getName() << std::endl;
}
void			NinjaTrap::ninjaShoebox(NinjaTrap& target) {
	target.takeDamage(1000);
	std::cout << "The ninja " << this->_name << " kill the NinjaTrap with naruto " << target.getName() << std::endl;
}

NinjaTrap&		NinjaTrap::operator=(NinjaTrap const & rhs) {
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_max_hit_points = rhs.getMaxHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_max_energy_points = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_melee_attack_damage = rhs.getMeleeAttackDamage();
	this->_ranged_attack_damage = rhs.getRangedAttackDamage();
	this->_armor_damage_reduction = rhs.getArmorDamageReduction();
	return (*this);
}
