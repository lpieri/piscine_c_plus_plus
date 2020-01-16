/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:49:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/16 09:17:36 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int const	Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = nb << Fixed::_bits;
}

Fixed::Fixed(float const fnb) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(fnb * (1 << Fixed::_bits));
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed&		Fixed::operator=(const Fixed& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int			Fixed::getRawBits(void) const {
	return (this->_value);
}

void		Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float		Fixed::toFloat(void) const {
	return ((double)this->_value / (double)(1 << Fixed::_bits));
}

int			Fixed::toInt(void) const {
	return (this->_value >> Fixed::_bits);
}

std::ostream &			operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
}
