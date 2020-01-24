/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 15:21:14 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/24 17:04:45 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>() {};
	MutantStack(MutantStack const & src) : std::stack<T>(src) {};
	~MutantStack(void) {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin(void) {
		return (std::begin(std::stack<T>::c));
	};

	iterator	end(void) {
		return (std::end(std::stack<T>::c));
	};
};

#endif