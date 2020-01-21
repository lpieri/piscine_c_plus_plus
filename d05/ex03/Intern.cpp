/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:59:48 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 15:14:57 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}
Intern::~Intern(void) {}

const char *	Intern::UnknowFormException::what() const throw() {
	return ("Unknow the request form...");
}

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
	AForm* retForm = nullptr;
	typedef AForm *(Intern::*f)(std::string const &) const;
	f ptrF[3] = {&Intern::_makeRobotomyRequestForm, &Intern::_makeShrubberyCreationForm, &Intern::_makePresidentalPardonForm};
	std::string		request[3] = {"Robotomy request", "Shrubbery request", "Presidental request"};
	for (size_t i = 0; i < 3; i++)
	{
		if (request_form == request[i]) {
			retForm = (this->*ptrF[i])(target);
			std::cout << "Intern creates " << retForm->getName() << std::endl;
		}
	}
	if (retForm == nullptr)
		throw Intern::UnknowFormException();
	return (retForm);
}