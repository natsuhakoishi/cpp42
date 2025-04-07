/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:32:42 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/07 17:12:42 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default Bureaucrat")
{
	std::cout << "Bureaucrat: Default Constructor called" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat: Default Constructor called" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.getName()), grade(copy.getGrade())
{
	std::cout << "Bureaucrat: Copy Constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copy) //name cant assign cuz is const
{
	std::cout << "Bureaucrat: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		grade = copy.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: Destructor called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade can't higher than 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade can't lower than 150");
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	if (this->grade > 1)
		--this->grade;
	else
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrement()
{
	if (this->grade < 150)
		++this->grade;
	else
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream &operator << (std::ostream &fout, const Bureaucrat &obj)
{
	return (fout << obj.getName() << ", bureaucrat grade " << obj.getGrade());
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " successfully signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
