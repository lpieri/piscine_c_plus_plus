/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 16:29:26 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>

FragTrap::FragTrap(void) : ClapTrap("ClapTrap") {
	this->_energy_points = this->_max_energy_points = 100;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "I'm the butt of a pandocorn." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_energy_points = this->_max_energy_points = 10;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "<" << name << "> I'm the butt of a pandocorn." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src.getName()) {
	std::cout << "<" << src.getName() << "> Et pan !" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "<" << this->_name << "> I am fire, I am death." << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	unsigned int	attack_damage = 115;
	std::string		random_attack[5] = {"Grenade", "Funzerker", "Gun Wizard", "Medbot", "Laser Inferno"};

	std::srand(std::time(NULL));
	if (this->_isDead())
		return (0);
	if (this->_energy_points <= 0) {
		std::cout << "<" << this->_name << "> is running out of energy !" << std::endl;
		return (0);
	}
	std::cout << "FR4G-TP <" << this->_name << "> attack <" << target << "> with " << random_attack[std::rand() % 5] << std::endl;
	return (attack_damage);
}

FragTrap&		FragTrap::operator=(FragTrap const & rhs) {
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
