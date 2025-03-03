/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 23:45:52 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/02 23:55:37 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap: Default Constructor called >> " << name << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->dmg = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap: Copy Constructor called" << std::endl;
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->dmg = copy.dmg;
}

FragTrap	&FragTrap::operator = (const FragTrap &copy)
{
	std::cout << "FragTrap: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->dmg = copy.dmg;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap [" << this->name << "] is requested for High-Fives!" << std::endl;
}
