/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:30:57 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 15:41:15 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
private:
	std::string		_name;
	std::string		_type;

public:
	Pony(std::string name_of_pony, std::string type);
	~Pony(void);

	void	do_magic(void) const;
};

#endif