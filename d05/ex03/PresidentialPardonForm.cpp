/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 09:21:04 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 09:37:45 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", PRESIDENTIAL_GRADE_R_TO_SIGN, PRESIDENTIAL_GRADE_R_TO_EXEC, "default") {}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExe(), src.getTarget()) {}
PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm("PresidentialPardonForm", PRESIDENTIAL_GRADE_R_TO_SIGN, PRESIDENTIAL_GRADE_R_TO_EXEC, target) {}
PresidentialPardonForm::~PresidentialPardonForm(void) {}

void				PresidentialPardonForm::_action(void) const {
	std::cout << this->getTarget() << "  has been pardoned by Zaphod Beeblebrox" << std::endl;
}