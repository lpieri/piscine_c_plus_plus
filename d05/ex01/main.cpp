/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:49:06 by cpieri            #+#    #+#             */
/*   Updated: 2020/01/20 14:06:53 by cpieri           ###   ########.fr       */
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
			}
			catch (std::exception & e) {
				delete b4;;
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << std::endl;
	}
	{
		std::cout << "[Form main test]:" << std::endl;
		{
			Form*		f1;
			std::cout << "-- try/catch number 1 --" << std::endl;
			try {
				std::cout << "Create f1 with grade 2..." << std::endl;
				f1 = new Form("f1", 2, 2);
				std::cout << *f1 << std::endl;
			}
			catch (std::exception & e) {
				delete f1;
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		// {
		// 	Form*		b2;
		// 	std::cout << "-- try/catch number 2 --" << std::endl;
		// 	try {
		// 		std::cout << "Create b2 with grade 242..." << std::endl;
		// 		b2 = new Form("b2", 242);
		// 	}
		// 	catch (std::exception & e) {
		// 		std::cout << e.what() << std::endl;
		// 	}
		// 	std::cout << std::endl;
		// }
		// {
		// 	Form*		b3;
		// 	std::cout << "-- try/catch number 3 --" << std::endl;
		// 	try {
		// 		std::cout << "Create b3 with grade 0..." << std::endl;
		// 		b3 = new Form("b3", 0);
		// 	}
		// 	catch (std::exception & e) {
		// 		std::cout << e.what() << std::endl;
		// 	}
		// 	std::cout << std::endl;
		// }
		// {
		// 	Form*		b4;
		// 	std::cout << "-- try/catch number 3 --" << std::endl;
		// 	try {
		// 		std::cout << "Create b4 with grade 149..." << std::endl;
		// 		b4 = new Form("b4", 149);
		// 		std::cout << *b4 << std::endl;
		// 		std::cout << "Remove 1 grade b4" << std::endl;
		// 		b4->removeGrade();
		// 		std::cout << *b4 << std::endl;
		// 		std::cout << "Remove 1 grade b4" << std::endl;
		// 		b4->removeGrade();
		// 		std::cout << *b4 << std::endl;
		// 	}
		// 	catch (std::exception & e) {
		// 		delete b4;;
		// 		std::cout << e.what() << std::endl;
		// 	}
		// }
	}
	return (0);
}