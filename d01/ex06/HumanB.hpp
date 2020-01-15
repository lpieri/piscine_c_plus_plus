/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:27:41 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 11:44:39 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon*			_weapon;
	std::string		_name;

public:
	HumanB(std::string name);
	~HumanB(void);

	void			attack(void) const;
	void			setWeapon(Weapon& weapon);
};

#endif