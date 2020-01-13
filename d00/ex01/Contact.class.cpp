/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:20:37 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/14 12:42:42 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iomanip>

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

std::string const		Contact::get_first_name(void) const {
	return (this->_first_name);
}

std::string const		Contact::get_last_name(void) const {
	return (this->_last_name);
}

std::string const		Contact::get_nickname(void) const {
	return (this->_nickname);
}

std::string const		Contact::get_login(void) const {
	return (this->_login);
}

std::string const		Contact::get_postal_address(void) const {
	return (this->_postal_address);
}

std::string const		Contact::get_email_address(void) const {
	return (this->_email_address);
}

std::string const		Contact::get_phone_number(void) const {
	return (this->_phone_number);
}

std::string const		Contact::get_birthday_date(void) const {
	return (this->_birthday_date);
}

std::string const		Contact::get_favorite_meal(void) const {
	return (this->_favorite_meal);
}

std::string const		Contact::get_underwear_color(void) const {
	return (this->_underwear_color);
}

std::string const		Contact::get_darkest_secret(void) const {
	return (this->_darkest_secret);
}

void					Contact::print_contact_info(int const index) const {
	std::cout << "Print the contact: " << index << std::endl;
	std::cout << "first_name: "	<< _first_name << std::endl;
	std::cout << "last_name: "	<< _last_name << std::endl;
	std::cout << "nickname: "	<< _nickname << std::endl;
	std::cout << "login: "	<< _login << std::endl;
	std::cout << "postal_address: "	<< _postal_address << std::endl;
	std::cout << "email_address: "	<< _email_address << std::endl;
	std::cout << "phone_number: "	<< _phone_number << std::endl;
	std::cout << "birthday_date: "	<< _birthday_date << std::endl;
	std::cout << "favorite_meal: "	<< _favorite_meal << std::endl;
	std::cout << "underwear_color: "	<< _underwear_color << std::endl;
	std::cout << "darkest_secret: "	<< _darkest_secret << std::endl;
}

void					Contact::print_contact_resume(int const index) const {
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;

	first_name = (this->_first_name.length() > 10) ? this->_first_name.substr(0, 9).replace(9, 1, ".") : this->_first_name;
	last_name = (this->_last_name.length() > 10) ? this->_last_name.substr(0, 9).replace(9, 1, ".") : this->_last_name;
	nickname = (this->_nickname.length() > 10) ? this->_nickname.substr(0, 9).replace(9, 1, ".") : this->_nickname;
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << first_name << "|";
	std::cout << std::setw(10) << last_name << "|";
	std::cout << std::setw(10) << nickname << "|" << std::endl;
}

int						Contact::set_first_name(std::string const value) {
	this->_first_name = value;
	if (this->_first_name != value)
		return (-1);
	return (0);
}
int						Contact::set_last_name(std::string const value) {
	this->_last_name = value;
	if (this->_last_name != value)
		return (-1);
	return (0);
}
int						Contact::set_nickname(std::string const value) {
	this->_nickname = value;
	if (this->_nickname != value)
		return (-1);
	return (0);
}
int						Contact::set_login(std::string const value) {
	this->_login = value;
	if (this->_login != value)
		return (-1);
	return (0);
}
int						Contact::set_postal_address(std::string const value) {
	this->_postal_address = value;
	if (this->_postal_address != value)
		return (-1);
	return (0);
}
int						Contact::set_email_address(std::string const value) {
	this->_email_address = value;
	if (this->_email_address != value)
		return (-1);
	return (0);
}
int						Contact::set_phone_number(std::string const value) {
	this->_phone_number = value;
	if (this->_phone_number != value)
		return (-1);
	return (0);
}
int						Contact::set_birthday_date(std::string const value) {
	this->_birthday_date = value;
	if (this->_birthday_date != value)
		return (-1);
	return (0);
}
int						Contact::set_favorite_meal(std::string const value) {
	this->_favorite_meal = value;
	if (this->_favorite_meal != value)
		return (-1);
	return (0);
}
int						Contact::set_underwear_color(std::string const value) {
	this->_underwear_color = value;
	if (this->_underwear_color != value)
		return (-1);
	return (0);
}
int						Contact::set_darkest_secret(std::string const value) {
	this->_darkest_secret = value;
	if (this->_darkest_secret != value)
		return (-1);
	return (0);
}
