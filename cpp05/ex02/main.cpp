/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:35:45 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/10 06:50:05 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	nijika("Nijika", 1);
	Bureaucrat	bocchi("Bocchi", 44);
	Bureaucrat	ryo("Ryo", 100);
	Bureaucrat	kita("Kita", 149);

	AForm *PresForm = new PresidentialPardonForm("President Dorito");
	AForm *PresForm2 = new PresidentialPardonForm("Vice President Kita");
	AForm *RoboForm = new RobotomyRequestForm("Robot Pink Jellyfish");
	AForm *RoboForm2 = new RobotomyRequestForm("Robot Yellow Chips");
	AForm *ShrubForm = new ShrubberyCreationForm("Ringgit");
	AForm *ShrubForm2 = new ShrubberyCreationForm("Dorito");

	std::cout << std::endl;
	std::cout << "--- Check Bureaucrats Details ---" << std::endl;
	std::cout << std::endl;
	std::cout << nijika << std::endl;
	std::cout << bocchi << std::endl;
	std::cout << ryo << std::endl;
	std::cout << kita << std::endl;
	std::cout << std::endl;

	// P 25,5 | R 72,45 | S 145,137
	std::cout << std::endl;
	std::cout << "--- Check Form Details ---" << std::endl;
	std::cout << std::endl;
	std::cout << (*PresForm) << std::endl;
	std::cout << (*PresForm2) << std::endl;
	std::cout << (*RoboForm) << std::endl;
	std::cout << (*RoboForm2) << std::endl;
	std::cout << (*ShrubForm) << std::endl;
	std::cout << (*ShrubForm2) << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "--- Sign Forms ---" << std::endl;
	std::cout << std::endl;

	nijika.signForm(*PresForm);
	nijika.executeForm(*PresForm);
	std::cout << std::endl;

	kita.signForm(*PresForm2);
	kita.executeForm(*PresForm2);
	std::cout << std::endl;

	bocchi.signForm(*RoboForm);
	bocchi.executeForm(*RoboForm);
	std::cout << std::endl;

	nijika.signForm(*RoboForm2);
	nijika.executeForm(*RoboForm2);
	std::cout << std::endl;

	ryo.signForm(*ShrubForm);
	ryo.executeForm(*ShrubForm);
	ryo.executeForm(*PresForm);
	std::cout << std::endl;

	nijika.signForm(*ShrubForm2);
	nijika.executeForm(*ShrubForm2);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "--- Check Form Signed Status ---" << std::endl;
	std::cout << std::endl;
	std::cout << (*PresForm) << std::endl;
	std::cout << (*PresForm2) << std::endl;
	std::cout << (*RoboForm) << std::endl;
	std::cout << (*RoboForm2) << std::endl;
	std::cout << (*ShrubForm) << std::endl;
	std::cout << std::endl;

	delete PresForm;
	delete PresForm2;
	delete RoboForm;
	delete RoboForm2;
	delete ShrubForm;
	delete ShrubForm2;
}
