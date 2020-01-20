/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:54:18 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/20 14:06:06 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
_name("default"), _grade_to_sign(MAX_LOW_GRADE),
_grade_to_execute(MAX_LOW_GRADE), _is_signed(false) {}

Form::Form(Form const & src) :
_name(src.getName()), _grade_to_sign(src.getGradeToSign()),
_grade_to_execute(src.getGradeToExe()), _is_signed(getIsSigned()) {}

Form::~Form(void) {}

Form::Form(std::string name, uint gradeToSign, uint gradeToExe) : _name(name),
_grade_to_sign(gradeToSign), _grade_to_execute(gradeToExe), _is_signed(false) {
	if (this->_grade_to_execute > MAX_LOW_GRADE || this->_grade_to_sign > MAX_LOW_GRADE)
		throw Form::GradeTooLowException();
	else if (this->_grade_to_execute < MAX_HIGH_GRADE || this->_grade_to_sign < MAX_HIGH_GRADE)
		throw Form::GradeTooHighException();
}

const char *	Form::GradeTooHighException::what() const throw() {
	return ("The grade is too high (grade < 1)");
}

const char *	Form::GradeTooLowException::what() const throw() {
	return ("The grade is too low (grade > 150)");
}

std::string		Form::getName(void) const {
	return (this->_name);
}

uint			Form::getGradeToSign(void) const {
	return (this->_grade_to_sign);
}

uint			Form::getGradeToExe(void) const {
	return (this->_grade_to_execute);
}

bool			Form::getIsSigned(void) const {
	return (this->_is_signed);
}

void			Form::beSigned(Bureaucrat const & bureaucrat) {
	if (bureaucrat.getGrade() > this->_grade_to_sign) {
		// bureaucrat.signForm(*this);
		throw Form::GradeTooLowException();
	}
	this->_is_signed = true;
	// bureaucrat.signForm(*this);
}

Form &			Form::operator=(Form const & rhs) {
	this->_is_signed = rhs.getIsSigned();
	return (*this);
}

std::ostream &		operator<<(std::ostream & o, Form const & i) {
	o << "The name of this form is: " << i.getName();
	o << ", grade required to sign it: " << i.getGradeToSign();
	o << ", grade required for execute it: " << i.getGradeToExe();
	o << ", this form is signed ? " << i.getIsSigned();
	return (o);
}