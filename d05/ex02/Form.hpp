/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:41:23 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 10:01:39 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class AForm
{
private:
	AForm(void);
	AForm(AForm const & src);

	virtual void		_action(void) const = 0;

	std::string const 	_name;
	std::string			_target;
	uint const			_grade_to_sign;
	uint const			_grade_to_execute;
	bool				_is_signed;

public:
	AForm(std::string name, uint gradeToSign, uint gradeToExe, std::string target);
	~AForm(void);

	class				GradeTooHighException : public std::exception {
		public:
			virtual const char *	what() const throw();
	};

	class				GradeTooLowException : public std::exception {
		public:
			virtual const char *	what() const throw();
	};

	std::string			getName(void) const;
	std::string			getTarget(void) const;
	uint				getGradeToSign(void) const;
	uint				getGradeToExe(void) const;
	bool				getIsSigned(void) const;

	void				beSigned(Bureaucrat const & bureaucrat);
	void				execute(Bureaucrat const & executor) const;

	AForm &				operator=(AForm const & rhs);
};

std::ostream &			operator<<(std::ostream & o, AForm const & i);

#endif