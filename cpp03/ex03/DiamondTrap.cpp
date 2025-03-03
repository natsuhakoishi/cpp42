/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 00:05:12 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/03 00:47:01 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap: Default Constructor called >> " << name << std::endl;
	this->name = name;
	ClapTrap::name = name.append("_clap_name");
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->dmg = FragTrap::dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap: Copy Constructor called" << std::endl;
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->dmg = copy.dmg;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &copy)
{
	std::cout << "DiamondTrap: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		ClapTrap::name = copy.ClapTrap::name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->dmg = copy.dmg;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap Name: " << ClapTrap::name << ", DiamondTrap Name: " << this->name << std::endl;
}
