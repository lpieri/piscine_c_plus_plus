/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:41:23 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/20 18:18:27 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# ifndef MAX_HIGH_GRADE
# define MAX_HIGH_GRADE		1
# endif

# ifndef MAX_LOW_GRADE
# define MAX_LOW_GRADE		150
# endif

class AForm
{
private:
	Form(void);
	Form(Form const & src);

	virtual void		_action(void) = 0;

	std::string const 	_name;
	uint const			_grade_to_sign;
	uint const			_grade_to_execute;
	bool				_is_signed;

public:
	Form(std::string name, uint gradeToSign, uint gradeToExe);
	~Form(void);

	class				GradeTooHighException : public std::exception {
		public:
			virtual const char *	what() const throw();
	};

	class				GradeTooLowException : public std::exception {
		public:
			virtual const char *	what() const throw();
	};

	std::string			getName(void) const;
	uint				getGradeToSign(void) const;
	uint				getGradeToExe(void) const;
	bool				getIsSigned(void) const;

	void				beSigned(Bureaucrat const & bureaucrat);
	void				execute(Bureaucrat const & executor) const;

	Form &				operator=(Form const & rhs);
};

std::ostream &			operator<<(std::ostream & o, Form const & i);

#endif