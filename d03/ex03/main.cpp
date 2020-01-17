/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:51:28 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 17:03:18 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void) {
	FragTrap	robot0("FragTrap");
	FragTrap	robot1("George");
	ScavTrap	robot2("ScavTrap");
	ClapTrap	robot3("ClapTrap");
	NinjaTrap	robotNinja("NinjaTrap");

	robot1.takeDamage(robot0.rangedAttack(robot1.getName()));
	robot0.takeDamage(robot1.vaulthunter_dot_exe(robot0.getName()));
	robot2.challengeNewcomer(robot0.getName());
	robotNinja.ninjaShoebox(robot0);
	robotNinja.ninjaShoebox(robot2);
	robotNinja.ninjaShoebox(robot3);
	robotNinja.ninjaShoebox(robotNinja);
	return (0);
}