/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:24:34 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/02 23:43:11 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap: Default Constructor called >> " << name << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap: Copy Constructor called" << std::endl;
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->dmg = copy.dmg;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "ScavTrap: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->dmg = copy.dmg;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hp == 0)
		std::cout << "ScavTrap [" << this->name << "] is out of hit points!" << std::endl;
	else if (this->energy == 0)
		std::cout << "ScavTrap [" << this->name << "] is out of energy points!" << std::endl;
	else
	{
		--this->energy;
		std::cout << "ScavTrap [" << this->name << "] attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap [" << this->name << "] is now in Gatekeeper mode." << std::endl;
}
