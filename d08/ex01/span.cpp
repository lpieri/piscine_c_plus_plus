/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:25:53 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/24 15:04:52 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _nb_max(0) {}
Span::Span(uint n) : _nb_max(n) {}
Span::Span(Span const & src) { *this = src; }
Span::~Span(void) {}

uint		Span::getNbMax(void) const {
	return (this->_nb_max);
}

void		Span::addNumber(int nb) {
	if (this->_vec.size() == this->_nb_max)
		throw std::exception();
	this->_vec.push_back(nb);
}

int			Span::shortestSpan(void) const {
	int		abs = 0;
	int		tmp = 0;
	if (this->_vec.size() < 2)
		throw std::exception();
	for(std::vector<int>::const_iterator it = this->_vec.begin() ; it < this->_vec.end() ; it++)
	{
		for (std::vector<int>::const_iterator it2 = this->_vec.begin() ; it2 < this->_vec.end() ; it2++)
		{
			if (*it == *it2)
				continue;
			abs = *it < *it2 ? *it2 - *it : *it - *it2;
			if (abs < tmp)
			{
				tmp = abs;
			}
		}
	}
	return (abs);
}

int			Span::longestSpan(void) const {
	std::vector<int>::const_iterator		min;
	std::vector<int>::const_iterator		max;

	if (this->_vec.size() < 2)
		throw std::exception();
	min = std::min_element<std::vector<int>::const_iterator>(this->_vec.begin(), this->_vec.end());
	max = std::max_element<std::vector<int>::const_iterator>(this->_vec.begin(), this->_vec.end());
	return (*max - *min);
}

Span const &	Span::operator=(Span const & rhs) {
	this->_nb_max = rhs.getNbMax();
	return (*this);
}