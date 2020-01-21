/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 09:19:25 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 09:35:09 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <iostream>

# define ROBOTOMY_GRADE_R_TO_SIGN	72
# define ROBOTOMY_GRADE_R_TO_EXEC	45

class RobotomyRequestForm : public AForm
{
private:
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm(void);

	virtual void		_action(void) const;

public:
	RobotomyRequestForm(std::string const & target);
	~RobotomyRequestForm(void);
};

#endif