/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 16:04:28 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>

ScavTrap::ScavTrap(void) : _name("ScavTrap"), _is_dead(false), _hit_points(100),
_max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1),
_melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3) {
	std::cout << "Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _is_dead(false), _hit_points(100),
_max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1),
_melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3) {
	std::cout << "<" << name << "> Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "<" << src.getName() << "> Let's get this party started!" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "<" << this->_name << "> Recompiling my combat code!" << std::endl;
}

bool			ScavTrap::_isDead(void) {
	this->_is_dead = false;
	if (this->_hit_points <= 0)
		this->_is_dead = true;
	if (this->_is_dead)
		std::cout << "<" << this->_name << "> is dead..." << std::endl;
	return (this->_is_dead);
}

std::string		ScavTrap::getName(void) const {
	return (this->_name);
}

int				ScavTrap::getHitPoints(void) const {
	return (this->_hit_points);
}

int				ScavTrap::getMaxHitPoints(void) const {
	return (this->_max_hit_points);
}

int				ScavTrap::getEnergyPoints(void) const {
	return (this->_energy_points);
}

int				ScavTrap::getMaxEnergyPoints(void) const {
	return (this->_max_energy_points);
}

int				ScavTrap::getLevel(void) const {
	return (this->_level);
}

int				ScavTrap::getMeleeAttackDamage(void) const {
	return (this->_melee_attack_damage);
}

int				ScavTrap::getRangedAttackDamage(void) const {
	return (this->_ranged_attack_damage);
}

int				ScavTrap::getArmorDamageReduction(void) const {
	return (this->_armor_damage_reduction);
}

void			ScavTrap::challengeNewcomer(std::string const & target) {
	std::string		random_attack[5] = {"Finish this day", "Get a cat", "...", "!!!", "---"};

	std::srand(std::time(NULL));
	std::cout << "SC4V-TP <" << this->_name << "> do " << random_attack[std::rand() % 5] << " challenges " << target << std::endl;
}

unsigned int	ScavTrap::rangedAttack(std::string const & target) {
	if (this->_isDead())
		return (0);
	std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
	return (this->_ranged_attack_damage);
}

unsigned int	ScavTrap::meleeAttack(std::string const & target) {
	if (this->_isDead())
		return (0);
	std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target << "> at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
	return (this->_melee_attack_damage);
}

void			ScavTrap::takeDamage(unsigned int amount) {
	amount -= this->_armor_damage_reduction;
	if (this->_hit_points - amount <= 0)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "<" << this->_name << "> took " << amount << " points of damage !" << std::endl;
	this->_isDead();
}

void			ScavTrap::beRepaired(unsigned int amount) {
	if (amount <= 0 || this->_hit_points + amount > (uint)this->_max_hit_points) {
		std::cout << "<" << this->_name << "> doesn't repairs himself !" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << "<" << this->_name << "> repairs himself by " << amount << " points !" << std::endl;
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
