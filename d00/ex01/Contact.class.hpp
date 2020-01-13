/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:20:40 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 12:29:57 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{
private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;

public:
	Contact(void);
	~Contact(void);

	std::string const		get_first_name(void) const;
	std::string const		get_last_name(void) const;
	std::string const		get_nickname(void) const;
	std::string const		get_login(void) const;
	std::string const		get_postal_address(void) const;
	std::string const		get_email_address(void) const;
	std::string const		get_phone_number(void) const;
	std::string const		get_birthday_date(void) const;
	std::string const		get_favorite_meal(void) const;
	std::string const		get_underwear_color(void) const;
	std::string const		get_darkest_secret(void) const;

	void					print_contact_info(int const index) const;
	void					print_contact_resume(int const index) const;

	int						set_first_name(std::string const value);
	int						set_last_name(std::string const value);
	int						set_nickname(std::string const value);
	int						set_login(std::string const value);
	int						set_postal_address(std::string const value);
	int						set_email_address(std::string const value);
	int						set_phone_number(std::string const value);
	int						set_birthday_date(std::string const value);
	int						set_favorite_meal(std::string const value);
	int						set_underwear_color(std::string const value);
	int						set_darkest_secret(std::string const value);
};

#endif