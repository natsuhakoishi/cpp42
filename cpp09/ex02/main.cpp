/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:44:00 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/05/04 22:07:05 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cout << "Error: Invalid Arguments" << std::endl;
		std::cout << "Hints: ./PmergeMe <positive integer sequence with at least 2 integers>" << std::endl;
		return (1);
	}

	std::string			av;
	std::vector<int>	temp;

	for (int i = 1; i < argc; i++)
	{
		av = argv[i];
		for (size_t j = 0; j < av.length(); j++)
		{
			if (!std::isdigit((unsigned char)av[j]))
			{
				std::cout << "Error: Arguments must be positive integer" << std::endl;
				return (1);
			}
		}
		int	num = atoi(av.c_str());
		if (num < 0 || num > 2147483647)
		{
			std::cout << "Error: Arguments must be positive integer" << std::endl;
			return (1);
		}
		temp.push_back(num);
	}

	PmergeMe	pmergeme;
	pmergeme.fillVector(temp);
	pmergeme.fillList(temp);

	std::cout << "Before: ";
	pmergeme.printVector();
	std::cout << std::endl;

	struct timeval	time;
	gettimeofday(&time, 0);
	unsigned long	startS = time.tv_sec;
	unsigned long	startMs = time.tv_usec;

	pmergeme.sortVector();

	return (0);
}
