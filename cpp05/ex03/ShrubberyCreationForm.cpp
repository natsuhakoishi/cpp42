/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:48:06 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/13 16:25:26 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm: Default Constructor called" << std::endl;
	this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm: Default Constructor (target) called" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm: Copy Constructor called" << std::endl;
	this->target = copy.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		this->target = copy.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}

void	ShrubberyCreationForm::inform() const
{
	std::ofstream	tree((this->target + "_shrubbery").c_str());

	tree << "        &\n";
	tree << "       &&&\n";
	tree << "      &&&&&\n";
	tree << "     &&&&&&&\n";
	tree << "    &&&&&&&&&\n";
	tree << "   &&&&&&&&&&&\n";
	tree << "  &&&&&&&&&&&&&\n";
	tree << " &&&&&&&&&&&&&&&\n";
	tree << "&&&&&&&&&&&&&&&&&\n";
	tree << "       |||\n";
	tree << "       |||\n";
	tree << "       |||\n";

	tree.close();
	std::cout << "ShrubberyCreationForm: " << this->target << "_shrubbery created" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}
