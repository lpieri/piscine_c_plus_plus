/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:13:13 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 11:57:36 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class Phonebook
{
private:
	Contact		_contact[8];
	size_t		_nb_contact;

public:
	Phonebook(void);
	~Phonebook(void);

	void		print_phonebook() const;
	void		search() const;
	void		set_new_contact();
};

#endif