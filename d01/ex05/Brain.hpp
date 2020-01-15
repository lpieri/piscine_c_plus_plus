/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 08:53:18 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 10:12:10 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	int		_nbOfNeurons;
	int		_qi;

public:
	Brain(void);
	~Brain(void);

	std::string		identify() const;
	int				getQi() const;
	int				getNbOfNeurons() const;
};

#endif