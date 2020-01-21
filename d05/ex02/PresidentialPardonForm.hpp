/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 09:29:41 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 09:35:16 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"
# include <iostream>

# define PRESIDENTIAL_GRADE_R_TO_SIGN	25
# define PRESIDENTIAL_GRADE_R_TO_EXEC	5

class PresidentialPardonForm : public AForm
{
private:
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm(void);

	virtual void		_action(void) const;

public:
	PresidentialPardonForm(std::string const & target);
	~PresidentialPardonForm(void);
};

#endif