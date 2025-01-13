/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:35:14 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/13 21:32:52 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	while (input != "EXIT")
	{
		std::cout << "\033[33mPhoneBook v4.2 (ADD | SERACH | EXIT) > \033[0m";
		std::getline(std::cin, input);
		if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
