/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 08:55:38 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 10:20:21 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
}

Human::~Human(void) {
}

std::string		Human::identify(void) const {
	return (this->brain.identify());
}

const Brain&	Human::getBrain(void) const {
	return (this->brain);
}