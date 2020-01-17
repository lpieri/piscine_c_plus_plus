/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:21:43 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 17:00:50 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	NinjaTrap(void);

public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);

	void			ninjaShoebox(ClapTrap& target);
	void			ninjaShoebox(ScavTrap& target);
	void			ninjaShoebox(FragTrap& target);
	void			ninjaShoebox(NinjaTrap& target);
	NinjaTrap&		operator=(NinjaTrap const & rhs);
};

#endif