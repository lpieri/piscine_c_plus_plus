/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 08:54:20 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 10:13:32 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) : _nbOfNeurons(42000), _qi(142) {
}

Brain::~Brain(void) {
}

std::string		Brain::identify(void) const {
	std::stringstream hexa;

	hexa << std::hex << this;
	return (hexa.str());
}

int				Brain::getQi() const {
	return (this->_qi);
}
int				Brain::getNbOfNeurons() const {
	return (this->_nbOfNeurons);
}