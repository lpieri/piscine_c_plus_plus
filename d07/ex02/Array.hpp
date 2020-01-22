/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:24:57 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/22 17:29:37 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
private:
	Array(void);
	Array(Array const & src);

	T *		_array;
	uint	_nb_of_array;

public:
	Array(uint nb);
	~Array(void);
};

#endif