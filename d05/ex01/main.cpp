/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:49:06 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/20 17:46:44 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
			Form*		f1;
			Bureaucrat*	b1;
			std::cout << "-- try/catch number 1 --" << std::endl;
			try {
				std::cout << "Create f1 with grade 2 & b1 with grade 42..." << std::endl;
				f1 = new Form("f1", 2, 2);
				b1 = new Bureaucrat("b1", 42);
				std::cout << *f1 << std::endl;
				std::cout << *b1 << std::endl;
				std::cout << "try f1 be signed by b1" << std::endl;
				f1->beSigned(*b1);
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
			Form*		f2;
			std::cout << "-- try/catch number 2 --" << std::endl;
			try {
				std::cout << "Create f2 with grade required to sign is 242..." << std::endl;
				f2 = new Form("f2", 242, 2);
				std::cout << *f2 << std::endl;
				delete f2;
			}
			catch (std::exception & e) {
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			Form*		f3;
			std::cout << "-- try/catch number 3 --" << std::endl;
			try {
				std::cout << "Create f3 with grade required to execute is 242..." << std::endl;
				f3 = new Form("f3", 2, 242);
				std::cout << *f3 << std::endl;
				delete f3;
			}
			catch (std::exception & e) {
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		{
			Form*		f4;
			Bureaucrat*	b4;
			std::cout << "-- try/catch number 4 --" << std::endl;
			try {
				std::cout << "Create f4 with grade 42 & b4 with grade 2..." << std::endl;
				f4 = new Form("f4", 42, 42);
				b4 = new Bureaucrat("b4", 2);
				std::cout << *f4 << std::endl;
				std::cout << *b4 << std::endl;
				std::cout << "try f4 be signed by b4" << std::endl;
				f4->beSigned(*b4);
				std::cout << *f4 << std::endl;
				delete f4;
				delete b4;
			}
			catch (std::exception & e) {
				delete f4;
				delete b4;
				std::cout << e.what() << std::endl;
			}
		}
	}
	return (0);
}