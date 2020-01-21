/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:54:18 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 13:43:42 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(void) :
_name("default"), _target("default"), _grade_to_sign(MAX_LOW_GRADE),
_grade_to_execute(MAX_LOW_GRADE), _is_signed(false) {}

AForm::AForm(AForm const & src) :
_name(src.getName()), _target(src.getTarget()), _grade_to_sign(src.getGradeToSign()),
_grade_to_execute(src.getGradeToExe()), _is_signed(getIsSigned()) {}

AForm::~AForm(void) {}

AForm::AForm(std::string name, uint gradeToSign, uint gradeToExe, std::string target) : _name(name), _target(target),
_grade_to_sign(gradeToSign), _grade_to_execute(gradeToExe), _is_signed(false) {
	if (this->_grade_to_execute > MAX_LOW_GRADE || this->_grade_to_sign > MAX_LOW_GRADE)
		throw AForm::GradeTooLowException();
	else if (this->_grade_to_execute < MAX_HIGH_GRADE || this->_grade_to_sign < MAX_HIGH_GRADE)
		throw AForm::GradeTooHighException();
}

const char *	AForm::FormIsNotSignedExeption::what() const throw() {
	return ("The Form is not signed cannot execute it");
}

const char *	AForm::GradeTooHighException::what() const throw() {
	return ("The grade of Bureaucrat or set value is too high (grade < 1)");
}

const char *	AForm::GradeTooLowException::what() const throw() {
	return ("The grade of Bureaucrat or set value is too low (grade > 150)");
}

std::string		AForm::getName(void) const {
	return (this->_name);
}

std::string		AForm::getTarget(void) const {
	return (this->_target);
}

uint			AForm::getGradeToSign(void) const {
	return (this->_grade_to_sign);
}

uint			AForm::getGradeToExe(void) const {
	return (this->_grade_to_execute);
}

bool			AForm::getIsSigned(void) const {
	return (this->_is_signed);
}

void			AForm::beSigned(Bureaucrat const & bureaucrat) {
	if (bureaucrat.getGrade() > this->_grade_to_sign) {
		bureaucrat.signForm(*this);
		throw AForm::GradeTooLowException();
	}
	this->_is_signed = true;
	bureaucrat.signForm(*this);
}

void			AForm::execute(Bureaucrat const & executor) const {
	if (this->_is_signed == false) {
		throw AForm::FormIsNotSignedExeption();
	}
	if (executor.getGrade() > this->_grade_to_execute) {
		executor.executeForm(*this);
		throw AForm::GradeTooLowException();
	}
	executor.executeForm(*this);
	this->_action();
}

AForm &			AForm::operator=(AForm const & rhs) {
	this->_is_signed = rhs.getIsSigned();
	return (*this);
}

std::ostream &		operator<<(std::ostream & o, AForm const & i) {
	o << "The name of this Aform is: " << i.getName();
	o << ", grade required to sign it: " << i.getGradeToSign();
	o << ", grade required for execute it: " << i.getGradeToExe();
	o << ", this Aform is signed ? " << i.getIsSigned();
	return (o);
}