/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:47:55 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/10 07:13:20 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm: Default Constructor called" << std::endl;
	this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm: Default Constructor (target) called" << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	std::cout << "PresidentialPardonForm: Copy Constructor called" << std::endl;
	this->target = copy.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		this->target = copy.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
}

void	PresidentialPardonForm::inform() const
{
	std::cout << this->target << " has been pardon by Zaphod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}
