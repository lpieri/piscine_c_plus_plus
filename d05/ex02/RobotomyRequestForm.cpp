/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 09:21:04 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 09:37:59 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", ROBOTOMY_GRADE_R_TO_SIGN, ROBOTOMY_GRADE_R_TO_EXEC, "default") {}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExe(), src.getTarget()) {}
RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : AForm("RobotomyRequestForm", ROBOTOMY_GRADE_R_TO_SIGN, ROBOTOMY_GRADE_R_TO_EXEC, target) {}
RobotomyRequestForm::~RobotomyRequestForm(void) {}

void				RobotomyRequestForm::_action(void) const {
	std::cout << "<Drilling noise...> " << this->getTarget() << " has been robotomized successfully 50%% of the time" << std::endl;
}