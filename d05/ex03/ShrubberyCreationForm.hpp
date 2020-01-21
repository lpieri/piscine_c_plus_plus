/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:53:45 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 09:34:58 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <sstream>
# include <fstream>

# define SHRUBBERY_GRADE_R_TO_SIGN	145
# define SHRUBBERY_GRADE_R_TO_EXEC	137

class ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm(void);

	virtual void		_action(void) const;

public:
	ShrubberyCreationForm(std::string const & target);
	~ShrubberyCreationForm(void);
};

#endif