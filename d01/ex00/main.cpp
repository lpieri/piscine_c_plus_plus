/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:32:43 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 18:36:57 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony*	ponyHeap = new Pony("Delay", "Licorne");

	ponyHeap->do_magic();
	delete ponyHeap;
}

void	ponyOnTheStack(void) {
	Pony	ponyStack = Pony("Sugar", "Cob");

	ponyStack.do_magic();
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}