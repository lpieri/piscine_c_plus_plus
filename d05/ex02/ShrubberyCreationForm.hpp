/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:53:45 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/20 18:18:57 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm(void);

	virtual void		_action(void);

	std::string			_target;

public:
	ShrubberyCreationForm(std::string const & target);
	~ShrubberyCreationForm(void);
};

#endif