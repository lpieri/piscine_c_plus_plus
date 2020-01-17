/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 16:29:45 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap") {
	this->_energy_points = this->_max_energy_points = 50;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_energy_points = this->_max_energy_points = 50;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "<" << name << "> Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src.getName()) {
	std::cout << "<" << src.getName() << "> Let's get this party started!" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "<" << this->_name << "> Recompiling my combat code!" << std::endl;
}

void			ScavTrap::challengeNewcomer(std::string const & target) {
	std::string		random_attack[5] = {"Finish this day", "Get a cat", "...", "!!!", "---"};

	std::srand(std::time(NULL));
	std::cout << "SC4V-TP <" << this->_name << "> do " << random_attack[std::rand() % 5] << " challenges " << target << std::endl;
}

ScavTrap&		ScavTrap::operator=(ScavTrap const & rhs) {
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
