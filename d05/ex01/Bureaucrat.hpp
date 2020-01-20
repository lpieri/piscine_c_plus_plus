/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:07:13 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/20 17:37:15 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

# ifndef MAX_HIGH_GRADE
# define MAX_HIGH_GRADE		1
# endif

# ifndef MAX_LOW_GRADE
# define MAX_LOW_GRADE		150
# endif

class Bureaucrat
{
private:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & src);

	std::string const	_name;
	uint				_grade;

public:
	Bureaucrat(std::string name, uint grade);
	~Bureaucrat();

	class				GradeTooHighException : public std::exception {
		public:
			virtual const char *	what() const throw();
	};

	class				GradeTooLowException : public std::exception {
		public:
			virtual const char *	what() const throw();
	};

	std::string			getName(void) const;
	uint				getGrade(void) const;

	void				addGrade(void);
	void				removeGrade(void);
	void				signForm(bool isSigned, std::string formName, uint gradeToSigned) const;

	Bureaucrat&			operator=(Bureaucrat const & rhs);
};

std::ostream &			operator<<(std::ostream & o, Bureaucrat const & i);

#endif