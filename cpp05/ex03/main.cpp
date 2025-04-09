/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:35:45 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/10 07:10:49 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	intern;
	Bureaucrat	nijika("Nijika", 1);

	std::cout << std::endl;
	std::cout << "--- Test for PPF ---" << std::endl;
	std::cout << std::endl;
	AForm *RoboForm = intern.makeForm("robotomy request", "Robot Ryo");
	std::cout << "Intern: Target is " << RoboForm->getTarget() << std::endl;
	nijika.signForm(*RoboForm);
	nijika.executeForm(*RoboForm);
	delete RoboForm;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "--- Test for PPF ---" << std::endl;
	std::cout << std::endl;
	AForm *PresForm = intern.makeForm("PRESIDENTIAL PARDON", "President Dorito");
	std::cout << "Intern: Target is " << PresForm->getTarget() << std::endl;
	nijika.signForm(*PresForm);
	nijika.executeForm(*PresForm);
	delete PresForm;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "--- Test for SCF ---" << std::endl;
	std::cout << std::endl;
	AForm *ShrubForm = intern.makeForm("ShRuBbErY CrEaTiOn", "Tree_Bocchi");
	std::cout << "Intern: Target is " << ShrubForm->getTarget() << std::endl;
	nijika.signForm(*ShrubForm);
	nijika.executeForm(*ShrubForm);
	delete ShrubForm;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "--- Test for Invalid case ---" << std::endl;
	std::cout << std::endl;
	try
	{
		AForm *invalid = intern.makeForm("Invalid", "Kita");
		std::cout << "Intern: Target is " << invalid->getTarget() << std::endl; //should not output
		delete invalid;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}
