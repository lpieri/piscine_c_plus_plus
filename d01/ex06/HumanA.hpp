/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:27:41 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 11:43:43 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon&			_weapon;
	std::string		_name;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void			attack(void) const;
};

#endif