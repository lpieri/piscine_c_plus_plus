/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:34:54 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 19:12:43 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string		_type;

public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void			setZombieType(std::string type);
	Zombie*			newZombie(std::string name);
	void			randomChump(void);
};

#endif