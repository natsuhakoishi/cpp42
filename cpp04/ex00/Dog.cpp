/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:34:03 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/04 02:45:05 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default Constructor called" << std::endl;
	this->type = "Ryo";
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog: Copy Constructor called" << std::endl;
	this->type = copy.type;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "Dog: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog [" << this->type << "]: Woof Woof!" << std::endl;
}
