/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 16:33:02 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ctime>

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _is_dead(false), _hit_points(100),
_max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1),
_melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5) {
	std::cout << "A ClapTrap has been created !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _is_dead(false), _hit_points(100),
_max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1),
_melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5) {
	std::cout << "<" << name << "> A ClapTrap has been created !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "<" << src.getName() << "> ClapTrap has been created !" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "<" << this->_name << "> ClapTrap was destroyed" << std::endl;
}

bool			ClapTrap::_isDead(void) {
	this->_is_dead = false;
	if (this->_hit_points <= 0)
		this->_is_dead = true;
	if (this->_is_dead)
		std::cout << "<" << this->_name << "> is dead..." << std::endl;
	return (this->_is_dead);
}

std::string		ClapTrap::getName(void) const {
	return (this->_name);
}

int				ClapTrap::getHitPoints(void) const {
	return (this->_hit_points);
}

int				ClapTrap::getMaxHitPoints(void) const {
	return (this->_max_hit_points);
}

int				ClapTrap::getEnergyPoints(void) const {
	return (this->_energy_points);
}

int				ClapTrap::getMaxEnergyPoints(void) const {
	return (this->_max_energy_points);
}

int				ClapTrap::getLevel(void) const {
	return (this->_level);
}

int				ClapTrap::getMeleeAttackDamage(void) const {
	return (this->_melee_attack_damage);
}

int				ClapTrap::getRangedAttackDamage(void) const {
	return (this->_ranged_attack_damage);
}

int				ClapTrap::getArmorDamageReduction(void) const {
	return (this->_armor_damage_reduction);
}

unsigned int	ClapTrap::rangedAttack(std::string const & target) {
	if (this->_isDead())
		return (0);
	std::cout << "CL4P-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
	return (this->_ranged_attack_damage);
}

unsigned int	ClapTrap::meleeAttack(std::string const & target) {
	if (this->_isDead())
		return (0);
	std::cout << "CL4P-TP <" << this->_name << "> attacks <" << target << "> at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
	return (this->_melee_attack_damage);
}

void			ClapTrap::takeDamage(unsigned int amount) {
	amount -= this->_armor_damage_reduction;
	if (this->_hit_points - amount <= 0)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "<" << this->_name << "> took " << amount << " points of damage !" << std::endl;
	this->_isDead();
}

void			ClapTrap::beRepaired(unsigned int amount) {
	if (amount <= 0 || this->_hit_points + amount > (uint)this->_max_hit_points) {
		std::cout << "<" << this->_name << "> doesn't repairs himself !" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << "<" << this->_name << "> repairs himself by " << amount << " points !" << std::endl;
}

ClapTrap&		ClapTrap::operator=(ClapTrap const & rhs) {
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
