/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:08:20 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 10:07:23 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", SHRUBBERY_GRADE_R_TO_SIGN, SHRUBBERY_GRADE_R_TO_EXEC, "default") {}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExe(), src.getTarget()) {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("ShrubberyCreationForm", SHRUBBERY_GRADE_R_TO_SIGN, SHRUBBERY_GRADE_R_TO_EXEC, target) {}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void				ShrubberyCreationForm::_action(void) const {
	std::stringstream	file_name;
	file_name << this->getTarget() << "_shrubbery";
	std::ofstream		file_ouput(file_name.str());

	if (!file_ouput.is_open())
		throw std::exception();
	file_ouput << "       ###" << std::endl;
	file_ouput << "      #o###" << std::endl;
	file_ouput << "    #####o###" << std::endl;
	file_ouput << "   #o#\\#|#/###" << std::endl;
	file_ouput << "    ###\\|/#o#" << std::endl;
	file_ouput << "     # }|{  #" << std::endl;
	file_ouput << "       }|{" << std::endl;
	file_ouput.close();
}