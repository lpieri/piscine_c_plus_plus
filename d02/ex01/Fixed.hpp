/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:44:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 20:01:23 by cpieri           ###   ########.fr       */
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

	Fixed&				operator=(const Fixed& rhs);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);

	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream &			operator<<(std::ostream & o, Fixed const & i);

#endif