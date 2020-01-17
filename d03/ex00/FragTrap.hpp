/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:21:43 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 15:38:01 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>

class FragTrap
{
private:
	FragTrap(void);

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
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

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
	unsigned int	vaulthunter_dot_exe(std::string const & target);
	unsigned int	rangedAttack(std::string const & target);
	unsigned int	meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);


	/*
	**	Overloading operator functions
	*/
	FragTrap&		operator=(FragTrap const & rhs);
};

#endif