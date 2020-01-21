/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:59:48 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 14:37:30 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}
Intern::~Intern(void) {}

AForm *			Intern::_makePresidentalPardonForm(std::string const & target) const {
	AForm *	ret = new PresidentialPardonForm(target);
	return (ret);
}
AForm *			Intern::_makeRobotomyRequestForm(std::string const & target) const {
	AForm *	ret = new RobotomyRequestForm(target);
	return (ret);
}
AForm *			Intern::_makeShrubberyCreationForm(std::string const & target) const {
	AForm *	ret = new ShrubberyCreationForm(target);
	return (ret);
}

AForm *		Intern::makeForm(std::string request_form, std::string target) const {
	typedef AForm *(Intern::*f)(std::string const &) const;
	f ptrF[3] = {&Intern::_makePresidentalPardonForm, &Intern::_makeRobotomyRequestForm, &Intern::_makeShrubberyCreationForm};
	AForm* retForm = (this->*ptrF[0])(target);
	return (retForm);
}