/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:49:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/16 10:18:32 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int const	Fixed::_bits = 8;

Fixed::Fixed(void) : _value(0) {
}

Fixed::Fixed(int const nb) {
	this->_value = nb << Fixed::_bits;
}

Fixed::Fixed(float const fnb) {
	this->_value = roundf(fnb * (1 << Fixed::_bits));
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed::~Fixed(void) {
}

inline bool		Fixed::operator>(const Fixed& rhs) const {
	if (this->_value > rhs.getRawBits())
		return (true);
	return (false);
}

inline bool		Fixed::operator<(const Fixed& rhs) const {
	if (this->_value < rhs.getRawBits())
		return (true);
	return (false);
}

inline bool		Fixed::operator<=(const Fixed& rhs) const {
	if (this->_value <= rhs.getRawBits())
		return (true);
	return (false);
}

inline bool		Fixed::operator>=(const Fixed& rhs) const {
	if (this->_value >= rhs.getRawBits())
		return (true);
	return (false);
}

inline bool		Fixed::operator==(const Fixed& rhs) const {
	if (this->_value == rhs.getRawBits())
		return (true);
	return (false);
}

inline bool		Fixed::operator!=(const Fixed& rhs) const {
	if (this->_value != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed		Fixed::operator+(const Fixed& rhs) const {
	float	float1 = this->toFloat();
	float	float2 = rhs.toFloat();
	Fixed	ret(float1 + float2);
	return (ret);
}

Fixed		Fixed::operator-(const Fixed& rhs) const {
	float	float1 = this->toFloat();
	float	float2 = rhs.toFloat();
	Fixed	ret(float1 - float2);
	return (ret);
}

Fixed		Fixed::operator/(const Fixed& rhs) const {
	float	float1 = this->toFloat();
	float	float2 = rhs.toFloat();
	Fixed	ret(float1 / float2);
	return (ret);
}

Fixed		Fixed::operator*(const Fixed& rhs) const {
	float	float1 = this->toFloat();
	float	float2 = rhs.toFloat();
	Fixed	ret(float1 * float2);
	return (ret);
}

Fixed		Fixed::operator++(void) {
	Fixed	ret;
	this->_value++;
	ret.setRawBits(this->_value);
	return (ret);
}

Fixed		Fixed::operator++(int) {
	Fixed	ret;
	ret.setRawBits(this->_value);
	this->_value++;
	return (ret);
}

Fixed		Fixed::operator--(void) {
	Fixed	ret;
	this->_value--;
	ret.setRawBits(this->_value);
	return (ret);
}

Fixed		Fixed::operator--(int) {
	Fixed	ret;
	ret.setRawBits(this->_value);
	this->_value--;
	return (ret);
}

Fixed&		Fixed::operator=(const Fixed& rhs) {
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

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return (a);
	return (b);
}

std::ostream &			operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
}
