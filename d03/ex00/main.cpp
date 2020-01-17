/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:51:28 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 15:26:14 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void) {
	FragTrap	robot0("ClapTrap");
	FragTrap	robot1("George");

	robot1.takeDamage(robot0.rangedAttack(robot1.getName()));
	robot0.takeDamage(robot1.vaulthunter_dot_exe(robot0.getName()));
	return (0);
}