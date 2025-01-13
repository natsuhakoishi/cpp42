/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:58:13 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/13 21:32:16 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string	args[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			a = 0;

	while (a < 4 && args[a].compare(level))
		++a;
	if (a == 4)
	{
		std::cout << "You are not complaining about Arcaea, meh." << std::endl;
		return ;
	}
	switch (a)
	{
		case (0):
			this->debug();
			/* fallthrough */
		case (1):
			this->info();
			/* fallthrough */
		case (2):
			this->warning();
			/* fallthrough */
		case (3):
			this->error();
			/* fallthrough */
		break ;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Loading player song score for 'Testify'. Chart Constant: 12.0, Player Score: 9,499,999 (Grade A)." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Successfully updated recent best 10 score and synced with cloud data." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Skill issue detected: Player is too early to play chart constant 12 above. Please practise lower constants." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Failed to purchase Memory. Please check your Internet Connection." << std::endl;
}
