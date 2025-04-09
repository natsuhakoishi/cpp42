/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:40:33 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/10 05:42:48 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : name("Default Form"), is_signed(0), gr_sign(150), gr_exec(150)
{
	std::cout << "Form: Default Constructor called" << std::endl;
}

Form::Form(const std::string name, const int gr_sign, const int gr_exec) : name(name), is_signed(0), gr_sign(gr_sign), gr_exec(gr_exec)
{
	std::cout << "Form: Default Constructor called" << std::endl;
	if (gr_sign < 1 || gr_exec < 1)
		throw (Form::GradeTooHighException());
	if (gr_sign > 150 || gr_exec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &copy) : name(copy.getName()), is_signed(copy.getIsSigned()), gr_sign(copy.getGradeSign()), gr_exec(copy.getGradeExec())
{
	std::cout << "Form: Copy Constructor called" << std::endl;
}

Form	&Form::operator = (const Form &copy) //cant assign cuz all vars is const
{
	std::cout << "Form: Copy Assignment Operator called" << std::endl;
	(void)copy;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form: Destructor called" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade can't higher than 1");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade can't lower than 150");
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->is_signed);
}

int	Form::getGradeSign() const
{
	return (this->gr_sign);
}

int	Form::getGradeExec() const
{
	return (this->gr_exec);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->gr_sign)
	{
		this->is_signed = 1;
		std::cout << b << " signed " << *this << std::endl;
	}
	else
	{
		std::cout << b << " couldn't sign " << *this << ", because grade too low." << std::endl;
		throw (Form::GradeTooLowException());
	}
}

std::ostream &operator << (std::ostream &fout, const Form &obj)
{
	return (fout << obj.getName() << ", Sign Grade: " << obj.getGradeSign() << ", Execute Grade: " << obj.getGradeExec() << ", Is Signed: " << obj.getIsSigned());
}
