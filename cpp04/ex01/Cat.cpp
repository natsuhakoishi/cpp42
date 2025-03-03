/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:34:07 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/04 03:23:41 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default Constructor called" << std::endl;
	this->type = "Nijika";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat: Copy Constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << "Cat: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound() const
{
	std::cout << "Cat [" << this->type << "]: Meow~~~~~" << std::endl;
}

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default Constructor called" << std::endl;
	this->type = "Seika";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat: Copy Constructor called" << std::endl;
	this->type = copy.type;
}

WrongCat	&WrongCat::operator = (const WrongCat &copy)
{
	std::cout << "WrongCat: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat [" << this->type << "] say she is sister of Nijika..?" << std::endl;
}

