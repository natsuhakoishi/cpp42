/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:40:33 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/03 21:38:31 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() : name("Default AForm"), is_signed(0), gr_sign(150), gr_exec(150)
{
	std::cout << "AForm: Default Constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int gr_sign, const int gr_exec) : name(name), is_signed(0), gr_sign(gr_sign), gr_exec(gr_exec)
{
	std::cout << "AForm: Default Constructor called" << std::endl;
	if (gr_sign < 1 || gr_exec < 1)
		throw (AForm::GradeTooHighException());
	if (gr_sign > 150 || gr_exec > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm &copy) : name(copy.getName()), is_signed(copy.getIsSigned()), gr_sign(copy.getGradeSign()), gr_exec(copy.getGradeExec())
{
	std::cout << "AForm: Copy Constructor called" << std::endl;
	*this = copy;
}

AForm	&AForm::operator = (const AForm &copy) //cant assign cuz all vars is const and bool is flag(no need)
{
	std::cout << "AForm: Copy Assignment Operator called" << std::endl;
	(void)copy;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm: Destructor called" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm: Grade can't higher than 1");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm: Grade too low");
}

const char *AForm::FormNotSignedExecption::what() const throw()
{
	return ("AForm: From is Not Signed");
}

std::string	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getIsSigned() const
{
	return (this->is_signed);
}

int	AForm::getGradeSign() const
{
	return (this->gr_sign);
}

int	AForm::getGradeExec() const
{
	return (this->gr_exec);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->gr_sign)
	{
		this->is_signed = 1;
		std::cout << b << " signed " << *this << std::endl;
	}
	else
	{
		std::cout << b << " couldn't sign " << *this << ", because grade too low." << std::endl;
		throw (AForm::GradeTooLowException());
	}
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (this->is_signed == 0)
		throw (AForm::FormNotSignedExecption());
	if (executor.getGrade() > this->gr_exec)
		throw (AForm::GradeTooLowException());
	std::cout << executor.getName() << " executing the form..." << std::endl;
	this->inform();
}

std::ostream &operator << (std::ostream &fout, const AForm &obj)
{
	return (fout << obj.getName() << ", Sign Grade: " << obj.getGradeSign() << ", Execute Grade: " << obj.getGradeExec() << ", Is Signed: " << obj.getIsSigned());
}
