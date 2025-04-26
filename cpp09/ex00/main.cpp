/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:41:27 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 15:28:36 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Cannot open files" << std::endl;
		std::cout << "Hints: ./btc input.txt" << std::endl;
		return (1);
	}

	BitcoinExchange	btc;

	btc.readCSV();
	btc.readInput(argv[1]);
	return (0);
}
