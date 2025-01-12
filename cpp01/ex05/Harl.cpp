/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:58:13 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/12 16:04:27 by yyean-wa         ###   ########.fr       */
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
	void		(Harl::*harlptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	args[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			a = 0;

	while (a < 4 && args[a].compare(level))
		++a;
	if (a < 4)
		(this->*harlptr[a])();
	else
		std::cout << "You are not complaining about Arcaea, meh." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "Loading player song score for 'Testify'. Chart Constant: 12.0, Player Score: 9,499,999 (Grade A)." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Successfully updated recent best 10 score and synced with cloud data." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Skill issue detected: Player is too early to play chart constant 12 above. Please practise lower constants." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Failed to purchase Memory. Please check your Internet Connection." << std::endl;
}
