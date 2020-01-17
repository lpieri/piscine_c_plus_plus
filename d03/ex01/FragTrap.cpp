/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:37:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 15:58:12 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>

FragTrap::FragTrap(void) : _name("ClapTrap"), _is_dead(false), _hit_points(100),
_max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1),
_melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5) {
	std::cout << "I'm the butt of a pandocorn." << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name), _is_dead(false), _hit_points(100),
_max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1),
_melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5) {
	std::cout << "<" << name << "> I'm the butt of a pandocorn." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "<" << src.getName() << "> Et pan !" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "<" << this->_name << "> I am fire, I am death." << std::endl;
}

bool			FragTrap::_isDead(void) {
	this->_is_dead = false;
	if (this->_hit_points <= 0)
		this->_is_dead = true;
	if (this->_is_dead)
		std::cout << "<" << this->_name << "> is dead..." << std::endl;
	return (this->_is_dead);
}

std::string		FragTrap::getName(void) const {
	return (this->_name);
}

int				FragTrap::getHitPoints(void) const {
	return (this->_hit_points);
}

int				FragTrap::getMaxHitPoints(void) const {
	return (this->_max_hit_points);
}

int				FragTrap::getEnergyPoints(void) const {
	return (this->_energy_points);
}

int				FragTrap::getMaxEnergyPoints(void) const {
	return (this->_max_energy_points);
}

int				FragTrap::getLevel(void) const {
	return (this->_level);
}

int				FragTrap::getMeleeAttackDamage(void) const {
	return (this->_melee_attack_damage);
}

int				FragTrap::getRangedAttackDamage(void) const {
	return (this->_ranged_attack_damage);
}

int				FragTrap::getArmorDamageReduction(void) const {
	return (this->_armor_damage_reduction);
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

unsigned int	FragTrap::rangedAttack(std::string const & target) {
	if (this->_isDead())
		return (0);
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
	return (this->_ranged_attack_damage);
}

unsigned int	FragTrap::meleeAttack(std::string const & target) {
	if (this->_isDead())
		return (0);
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
	return (this->_melee_attack_damage);
}

void			FragTrap::takeDamage(unsigned int amount) {
	amount -= this->_armor_damage_reduction;
	if (this->_hit_points - amount <= 0)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "<" << this->_name << "> took " << amount << " points of damage !" << std::endl;
	this->_isDead();
}

void			FragTrap::beRepaired(unsigned int amount) {
	if (amount <= 0 || this->_hit_points + amount > (uint)this->_max_hit_points) {
		std::cout << "<" << this->_name << "> doesn't repairs himself !" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << "<" << this->_name << "> repairs himself by " << amount << " points !" << std::endl;
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
