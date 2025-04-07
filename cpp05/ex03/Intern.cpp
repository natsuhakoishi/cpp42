/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:49:10 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/07 19:07:01 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern: Default Constructor called." << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern: Copy Constructor called." << std::endl;
	(void)copy;
}

Intern &Intern::operator = (const Intern &copy)
{
	std::cout << "Intern: Copy Assignment Operator called." << std::endl;
	(void)copy;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern: Destructor called." << std::endl;
}

const char *Intern::InvalidForm::what() const throw()
{
	return ("Intern: Invalid Form Name");
}

AForm *Presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string input, std::string target)
{
	AForm *(*ft[])(std::string) = {&Presidential, &Robotomy, &Shrubbery};
	std::string	array[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	std::string	lowstr;
	int			index = 0;

	for (int a = 0; a < (int)input.length(); a++)
		lowstr += std::tolower(input[a]);
	while (index < 3 && array[index].compare(lowstr))
		index++;
	if (index == 3)
		throw (Intern::InvalidForm());
	AForm *form = ft[index](target);
	std::cout << "Intern: Intern creates " << form->getName() << std::endl;
	return (form);
}
