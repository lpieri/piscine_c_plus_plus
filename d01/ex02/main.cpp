/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:35:43 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 19:21:03 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void) {
	ZombieEvent	events;
	Zombie*		zombieHeap;

	events.randomChump();
	events.setZombieType("Big Boss");
	zombieHeap = events.newZombie("Louise");
	zombieHeap->announce();
	delete zombieHeap;
	return (0);
}