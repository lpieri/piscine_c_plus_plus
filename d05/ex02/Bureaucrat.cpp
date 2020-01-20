/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:18:17 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/20 17:32:55 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(MAX_LOW_GRADE) {}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, uint grade) : _name(name) {
	if (grade < MAX_HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > MAX_LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade is too high (grade < 1)");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade is too low (grade > 150)");
}

std::string		Bureaucrat::getName(void) const {
	return (this->_name);
}

uint			Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void			Bureaucrat::addGrade(void) {
	if (this->_grade - 1 < MAX_HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}

void			Bureaucrat::removeGrade(void) {
	if (this->_grade + 1 > MAX_LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}

void			Bureaucrat::signForm(bool isSigned, std::string formName, uint gradeToSigned) const {
	if (isSigned) {
		std::cout << this->_name << " signs " << formName << std::endl;
	} else {
		std::cout << this->_name << " cannot sign " << formName << " he grade ";
		std::cout << this->_grade << " is too low than form grade " << gradeToSigned << std::endl;
	}
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs) {
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}