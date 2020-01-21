/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:49:06 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/21 15:18:25 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void) {
	{
		std::cout << "[Bureaucrat main test]:" << std::endl;
		{
			Bureaucrat*		b1;
			std::cout << "-- try/catch number 1 --" << std::endl;
			try {
				std::cout << "Create b1 with grade 2..." << std::endl;
				b1 = new Bureaucrat("b1", 2);
				std::cout << *b1 << std::endl;
				std::cout << "Add 1 grade b1" << std::endl;
				b1->addGrade();
				std::cout << *b1 << std::endl;
				std::cout << "Add 1 grade b1" << std::endl;
				b1->addGrade();
				std::cout << *b1 << std::endl;
				delete b1;
			}
			catch (std::exception & e) {
				delete b1;
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			Bureaucrat*		b2;
			std::cout << "-- try/catch number 2 --" << std::endl;
			try {
				std::cout << "Create b2 with grade 242..." << std::endl;
				b2 = new Bureaucrat("b2", 242);
				std::cout << *b2 << std::endl;
				delete b2;
			}
			catch (std::exception & e) {
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			Bureaucrat*		b3;
			std::cout << "-- try/catch number 3 --" << std::endl;
			try {
				std::cout << "Create b3 with grade 0..." << std::endl;
				b3 = new Bureaucrat("b3", 0);
				std::cout << *b3 << std::endl;
				delete b3;
			}
			catch (std::exception & e) {
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			Bureaucrat*		b4;
			std::cout << "-- try/catch number 3 --" << std::endl;
			try {
				std::cout << "Create b4 with grade 149..." << std::endl;
				b4 = new Bureaucrat("b4", 149);
				std::cout << *b4 << std::endl;
				std::cout << "Remove 1 grade b4" << std::endl;
				b4->removeGrade();
				std::cout << *b4 << std::endl;
				std::cout << "Remove 1 grade b4" << std::endl;
				b4->removeGrade();
				std::cout << *b4 << std::endl;
				delete b4;
			}
			catch (std::exception & e) {
				delete b4;
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
	}
	{
		std::cout << "[Form main test]:" << std::endl;
		{
			ShrubberyCreationForm*	f1;
			Bureaucrat*	b1;
			std::cout << "-- try/catch number 1 --" << std::endl;
			try {
				std::cout << "Create f1 ShrubberyCreationForm & b1 with grade 42..." << std::endl;
				f1 = new ShrubberyCreationForm("sh1");
				b1 = new Bureaucrat("b1", 42);
				std::cout << *f1 << std::endl;
				std::cout << *b1 << std::endl;
				std::cout << "try f1 execute by b1" << std::endl;
				f1->execute(*b1);
				std::cout << *f1 << std::endl;
				delete f1;
				delete b1;
			}
			catch (std::exception & e) {
				delete f1;
				delete b1;
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			ShrubberyCreationForm*	f2;
			Bureaucrat*	b2;
			std::cout << "-- try/catch number 2 --" << std::endl;
			try {
				std::cout << "Create f2 ShrubberyCreationForm & b2 with grade 142..." << std::endl;
				f2 = new ShrubberyCreationForm("sh2");
				b2 = new Bureaucrat("b2", 142);
				std::cout << *f2 << std::endl;
				std::cout << *b2 << std::endl;
				std::cout << "try f2 sign by b2" << std::endl;
				f2->beSigned(*b2);
				std::cout << *f2 << std::endl;
				std::cout << "try f2 execute by b2" << std::endl;
				f2->execute(*b2);
				std::cout << *f2 << std::endl;
				delete f2;
				delete b2;
			}
			catch (std::exception & e) {
				delete f2;
				delete b2;
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			ShrubberyCreationForm*	f3;
			Bureaucrat*	b3;
			Bureaucrat*	b3Bis;
			std::cout << "-- try/catch number 3 --" << std::endl;
			try {
				std::cout << "Create f3 ShrubberyCreationForm & b3 with grade 142 & b3Bis with grade 135..." << std::endl;
				f3 = new ShrubberyCreationForm("sh3");
				b3 = new Bureaucrat("b3", 142);
				b3Bis = new Bureaucrat("b3", 135);
				std::cout << *f3 << std::endl;
				std::cout << *b3 << std::endl;
				std::cout << *b3Bis << std::endl;
				std::cout << "try f3 sign by b3" << std::endl;
				f3->beSigned(*b3);
				std::cout << *f3 << std::endl;
				std::cout << "try f3 execute by b3" << std::endl;
				f3->execute(*b3Bis);
				std::cout << *f3 << std::endl;
				delete f3;
				delete b3;
				delete b3Bis;
			}
			catch (std::exception & e) {
				delete f3;
				delete b3;
				delete b3Bis;
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			RobotomyRequestForm*	f4;
			Bureaucrat*	b4;
			std::cout << "-- try/catch number 4 --" << std::endl;
			try {
				std::cout << "Create f4 RobotomyRequestForm & b4 with grade 1..." << std::endl;
				f4 = new RobotomyRequestForm("sh4");
				b4 = new Bureaucrat("b4", 1);
				std::cout << *f4 << std::endl;
				std::cout << *b4 << std::endl;
				std::cout << "try f4 sign by b4" << std::endl;
				f4->beSigned(*b4);
				std::cout << *f4 << std::endl;
				std::cout << "try f4 execute by b4" << std::endl;
				f4->execute(*b4);
				std::cout << *f4 << std::endl;
				delete f4;
				delete b4;
			}
			catch (std::exception & e) {
				delete f4;
				delete b4;
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			PresidentialPardonForm*	f5;
			Bureaucrat*	b5;
			std::cout << "-- try/catch number 5 --" << std::endl;
			try {
				std::cout << "Create f5 PresidentialPardonForm & b5 with grade 1..." << std::endl;
				f5 = new PresidentialPardonForm("sh5");
				b5 = new Bureaucrat("b5", 1);
				std::cout << *f5 << std::endl;
				std::cout << *b5 << std::endl;
				std::cout << "try f5 sign by b5" << std::endl;
				f5->beSigned(*b5);
				std::cout << *f5 << std::endl;
				std::cout << "try f5 execute by b5" << std::endl;
				f5->execute(*b5);
				std::cout << *f5 << std::endl;
				delete f5;
				delete b5;
			}
			catch (std::exception & e) {
				delete f5;
				delete b5;
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
	}
	{
		std::cout << "[Intern main test]:" << std::endl;
		{
			AForm *		f1;
			Intern *	i1 = new Intern;
			std::cout << "-- intern test number 1 --" << std::endl;
			try {
				std::cout << "i1 create f1 RobotomyRequestForm..." << std::endl;
				f1 = i1->makeForm("Robotomy request", "i1");
				std::cout << *f1 << std::endl;
				delete f1;
				delete i1;
				std::cout << std::endl;
			}
			catch (std::exception & e) {
				delete i1;
				std::cout << e.what() << std::endl;
			}
		}
		{
			AForm *		f2;
			Intern *	i2 = new Intern;
			std::cout << "-- intern test number 2 --" << std::endl;
			try {
				std::cout << "i2 create f2 ShrubberyCreationForm..." << std::endl;
				f2 = i2->makeForm("Shrubbery request", "i2");
				std::cout << *f2 << std::endl;
				delete f2;
				delete i2;
				std::cout << std::endl;
			}
			catch (std::exception & e) {
				delete i2;
				std::cout << e.what() << std::endl;
			}
		}
		{
			AForm *		f3;
			Intern *	i3 = new Intern;
			std::cout << "-- intern test number 3 --" << std::endl;
			try {
				std::cout << "i3 create f3 PresidentialPardonForm..." << std::endl;
				f3 = i3->makeForm("Presidental request", "i3");
				std::cout << *f3 << std::endl;
				delete f3;
				delete i3;
				std::cout << std::endl;
			}
			catch (std::exception & e) {
				delete i3;
				std::cout << e.what() << std::endl;
			}
		}
		{
			AForm *		f4;
			Intern *	i4 = new Intern;
			std::cout << "-- intern test number 4 --" << std::endl;
			try {
				std::cout << "i4 create f4 LolForm..." << std::endl;
				f4 = i4->makeForm("Lol request", "i4");
				std::cout << *f4 << std::endl;
				delete f4;
				delete i4;
				std::cout << std::endl;
			}
			catch (std::exception & e) {
				delete i4;
				std::cout << e.what() << std::endl;
			}
		}
	}
	return (0);
}