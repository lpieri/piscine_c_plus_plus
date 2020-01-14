/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:27:16 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 20:34:37 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	int			_nbOfZombies;
	Zombie*		_zombies;

public:
	ZombieHorde(int n);
	~ZombieHorde(void);

	void		announce(void) const;
};

#endif