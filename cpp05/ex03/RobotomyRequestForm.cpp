/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:48:00 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/10 07:13:31 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm: Default Constructor called" << std::endl;
	this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm: Default Constructor (target) called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	std::cout << "RobotomyRequestForm: Copy Constructor called" << std::endl;
	this->target = copy.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		this->target = copy.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}

void	RobotomyRequestForm::inform() const
{
	srand(time(0));
	std::cout << "drilllllllllllllllllllllll" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized." << std::endl;
	else
		std::cout << this->target << " robotomize failed." << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}
