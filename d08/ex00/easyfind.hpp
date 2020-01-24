/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 08:43:58 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/24 10:19:47 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ESAY_FIND_HPP
# define ESAY_FIND_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>

template<typename T>
void	easyfind(T container, int toFind) {
	if (std::find(container.begin(), container.end(), toFind) == container.end())
		throw std::exception();
}

#endif