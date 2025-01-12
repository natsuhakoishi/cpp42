/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:01:46 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/11 20:07:18 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type):weapon(&type)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}
