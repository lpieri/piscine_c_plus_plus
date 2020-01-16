/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:21:43 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/16 13:44:50 by cpieri           ###   ########.fr       */
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
	int				_hit_points;
	int				_max_hit_points;
	int				_energy_points;
	int				_max_energy_points;
	int				_level;
	int				_melee_attack_damage;
	int				_ranged_attack_damage;
	int				_armor_damage_reduction;

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	std::string		getName(void) const;
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	FragTrap&		operator=(FragTrap const & rhs);
};

#endif