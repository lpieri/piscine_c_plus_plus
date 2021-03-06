/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:44:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/15 19:07:36 by cpieri           ###   ########.fr       */
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
	Fixed(const Fixed& src);
	~Fixed(void);

	Fixed&				operator=(const Fixed& rhs);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};

#endif