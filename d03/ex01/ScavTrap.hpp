/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:21:43 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 16:07:00 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>

class ScavTrap
{
private:
	ScavTrap(void);

	std::string		_name;
	bool			_is_dead;
	int				_hit_points;
	int				_max_hit_points;
	int				_energy_points;
	int				_max_energy_points;
	int				_level;
	int				_melee_attack_damage;
	int				_ranged_attack_damage;
	int				_armor_damage_reduction;

	bool			_isDead(void);

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	/*
	**	Get functions
	*/
	std::string		getName(void) const;
	int				getHitPoints(void) const;
	int				getMaxHitPoints(void) const;
	int				getEnergyPoints(void) const;
	int				getMaxEnergyPoints(void) const;
	int				getLevel(void) const;
	int				getMeleeAttackDamage(void) const;
	int				getRangedAttackDamage(void) const;
	int				getArmorDamageReduction(void) const;

	/*
	**	Action functions
	*/
	void			challengeNewcomer(std::string const & target);
	unsigned int	rangedAttack(std::string const & target);
	unsigned int	meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);


	/*
	**	Overloading operator functions
	*/
	ScavTrap&		operator=(ScavTrap const & rhs);
};

#endif