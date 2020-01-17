/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:21:43 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/17 16:15:16 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	unsigned int	vaulthunter_dot_exe(std::string const & target);
	FragTrap&		operator=(FragTrap const & rhs);
};

#endif