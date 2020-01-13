/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 10:16:29 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 13:32:13 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void) : _nb_contact(0) {
}

Phonebook::~Phonebook(void) {
}

void		Phonebook::print_phonebook() const {

}

void		Phonebook::search(void) const {
	std::string		index;
	size_t			i;

	for (size_t i = 0; i < this->_nb_contact; i++)
	{
		this->_contact[i].print_contact_resume(i);
	}
	std::cout << "Please select your contact: " << std::endl;
	std::getline(std::cin, index);
	i = std::stoi(index);
	if (i < this->_nb_contact)
		_contact[i].print_contact_info(i);
	else
		std::cout << "This index not exist" << std::endl;
}

void		Phonebook::set_new_contact() {
	Contact			new_c;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email_address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;

	if (this->_nb_contact < 8) {
		std::cout << "Please enter the first_name of the new contact: " << std::endl;
		std::getline(std::cin, first_name);
		new_c.set_first_name(first_name);
		std::cout << "Please enter the last_name of the new contact: " << std::endl;
		std::getline(std::cin, last_name);
		new_c.set_last_name(last_name);
		std::cout << "Please enter the nickname of the new contact: " << std::endl;
		std::getline(std::cin, nickname);
		new_c.set_nickname(nickname);
		std::cout << "Please enter the login of the new contact: " << std::endl;
		std::getline(std::cin, login);
		new_c.set_login(login);
		std::cout << "Please enter the postal_address of the new contact: " << std::endl;
		std::getline(std::cin, postal_address);
		new_c.set_postal_address(postal_address);
		std::cout << "Please enter the email_address of the new contact: " << std::endl;
		std::getline(std::cin, email_address);
		new_c.set_email_address(email_address);
		std::cout << "Please enter the phone_number of the new contact: " << std::endl;
		std::getline(std::cin, phone_number);
		new_c.set_phone_number(phone_number);
		std::cout << "Please enter the birthday_date of the new contact: " << std::endl;
		std::getline(std::cin, birthday_date);
		new_c.set_birthday_date(birthday_date);
		std::cout << "Please enter the favorite_meal of the new contact: " << std::endl;
		std::getline(std::cin, favorite_meal);
		new_c.set_favorite_meal(favorite_meal);
		std::cout << "Please enter the underwear_color of the new contact: " << std::endl;
		std::getline(std::cin, underwear_color);
		new_c.set_underwear_color(underwear_color);
		std::cout << "Please enter the darkest_secret of the new contact: " << std::endl;
		std::getline(std::cin, darkest_secret);
		new_c.set_darkest_secret(darkest_secret);
		this->_contact[this->_nb_contact] = new_c;
		this->_nb_contact++;
	} else {
		std::cout << "The phonebook is full" << std::endl;
	}
}
