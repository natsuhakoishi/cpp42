/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:33:28 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/04 02:50:23 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default Constructor called" << std::endl;
	this->type = "Doritos";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal: Copy Constructor called" << std::endl;
	this->type = copy.type;
}

Animal	&Animal::operator = (const Animal &copy)
{
	std::cout << "Animal: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal [" << this->type << "] making crispy chips sound..." << std::endl;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default Constructor called" << std::endl;
	this->type = "Weird Doritos";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal: Copy Constructor called" << std::endl;
	this->type = copy.type;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &copy)
{
	std::cout << "WrongAnimal: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal [" << this->type << "] say her name is Nijika..?" << std::endl;
}
