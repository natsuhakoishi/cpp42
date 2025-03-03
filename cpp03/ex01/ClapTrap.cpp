/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:12:44 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/02 22:03:13 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap: Default Constructor called >> " << name << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap: Copy Constructor called" << std::endl;
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->dmg = copy.dmg;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &copy)
{
	std::cout << "ClapTrap: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->dmg = copy.dmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hp == 0)
		std::cout << "ClapTrap [" << this->name << "] is out of hit points!" << std::endl;
	else if (this->energy == 0)
		std::cout << "ClapTrap [" << this->name << "] is out of energy points!" << std::endl;
	else
	{
		--this->energy;
		std::cout << "ClapTrap [" << this->name << "] attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp == 0)
		std::cout << "ClapTrap [" << this->name << "] is out of hit points!" << std::endl;
	else if (this->energy == 0)
		std::cout << "ClapTrap [" << this->name << "] is out of energy points!" << std::endl;
	else
	{
		--this->energy;
		this->hp += amount;
		std::cout << "ClapTrap [" << this->name << "] be repaired for " << amount << " hp, now is " << this->hp << " hp!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp <= amount)
	{
		this->hp = 0;
		std::cout << "KO: ClapTrap [" << this->name << "] has taken " << amount << " damage!" << std::endl;
	}
	else
	{
		this->hp -= amount;
		std::cout << "ClapTrap [" << this->name << "] has taken " << amount << " damage!" << std::endl;
	}
}
