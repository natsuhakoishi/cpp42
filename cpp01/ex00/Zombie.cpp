/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:38:02 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/11 19:11:11 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructing default Zombie: Tairitsu" << std::endl;
	this->name = "Tairitsu";
}

Zombie::~Zombie()
{
	std::cout << "Destructing: " << this->name << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Constructing Zombie: " << name << std::endl;
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

