/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:34:03 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/04 03:26:59 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default Constructor called" << std::endl;
	this->type = "Ryo";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog: Copy Constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "Dog: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound() const
{
	std::cout << "Dog [" << this->type << "]: Woof Woof!" << std::endl;
}
