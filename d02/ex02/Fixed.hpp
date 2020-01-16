/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:44:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/16 10:18:16 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	static int const	_bits;

public:
	Fixed(void);
	Fixed(int const nb);
	Fixed(float const fnb);
	Fixed(Fixed const & src);
	~Fixed(void);

	inline bool			operator>(const Fixed& rhs) const;
	inline bool			operator<(const Fixed& rhs) const;
	inline bool			operator<=(const Fixed& rhs) const;
	inline bool			operator>=(const Fixed& rhs) const;
	inline bool			operator==(const Fixed& rhs) const;
	inline bool			operator!=(const Fixed& rhs) const;
	Fixed				operator+(const Fixed& rhs) const;
	Fixed				operator-(const Fixed& rhs) const;
	Fixed				operator/(const Fixed& rhs) const;
	Fixed				operator*(const Fixed& rhs) const;
	Fixed				operator++(void);
	Fixed				operator++(int);
	Fixed				operator--(void);
	Fixed				operator--(int);
	Fixed&				operator=(const Fixed& rhs);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);

	float				toFloat(void) const;
	int					toInt(void) const;

	static const Fixed&		min(const Fixed& a, const Fixed& b);
	static const Fixed&		max(const Fixed& a, const Fixed& b);
};

std::ostream &			operator<<(std::ostream & o, Fixed const & i);

#endif