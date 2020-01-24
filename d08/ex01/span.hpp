/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:26:05 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/24 15:03:32 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <stdexcept>
# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
private:
	Span(void);

	uint				_nb_max;
	std::vector<int>	_vec;

public:
	Span(uint n);
	Span(Span const & src);
	~Span(void);

	uint				getNbMax(void) const;
	void				addNumber(int nb);
	int					shortestSpan(void) const;
	int					longestSpan(void) const;

	Span const &		operator=(Span const & rhs);
};

#endif