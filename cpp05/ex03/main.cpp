/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:35:45 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/07 19:08:56 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	Intern intern;
	Bureaucrat guy("guy", 1);

	std::cout << std::endl << "------------ ROBOT ------------" << std::endl;
	AForm *robot = intern.makeForm("ROBOTOMY request", "robot");
	std::cout << "target is: " << robot->getTarget() << std::endl;
	guy.signForm(*robot);
	guy.executeForm(*robot);
	delete robot;

	std::cout << std::endl << "------------ SHRUB ------------" << std::endl;
	AForm *shrub = intern.makeForm("SHRUBBERY creation", "shrub");
	std::cout << "target is: " << shrub->getTarget() << std::endl;
	guy.signForm(*shrub);
	guy.executeForm(*shrub);
	delete shrub;

	std::cout << std::endl << "------------ PRESIDENT ------------" << std::endl;
	AForm *president = intern.makeForm("PRESIDENTIAL pardon", "president");
	std::cout << "target is: " << president->getTarget() << std::endl;
	guy.signForm(*president);
	guy.executeForm(*president);
	delete president;

	std::cout << std::endl << "------------ FAIL ------------" << std::endl;
	try
	{
		AForm *fail = intern.makeForm("fail", "fail");
		std::cout << "what??: " << fail->getName() << std::endl;
		delete fail;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "----------------------------" << std::endl;
}
