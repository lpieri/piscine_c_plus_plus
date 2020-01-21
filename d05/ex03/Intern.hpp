/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:56:57 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 15:14:10 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include "Form.hpp"

class Intern
{
private:
	Intern(Intern const & src);

	AForm *			_makePresidentalPardonForm(std::string const & target) const;
	AForm *			_makeRobotomyRequestForm(std::string const & target) const;
	AForm *			_makeShrubberyCreationForm(std::string const & target) const;

public:
	Intern(void);
	~Intern();

	class				UnknowFormException : public std::exception {
		public:
			virtual const char *	what() const throw();
	};


	AForm *			makeForm(std::string request_form, std::string target) const;

	Intern&			operator=(Intern const & rhs);
};

#endif