/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:06:28 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/17 01:59:16 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printNum(int &n)
{
	std::cout << n << std::endl;
}

void	printStr(std::string &s)
{
	std::cout << s << std::endl;
}

int		printFloat(float &f)
{
	std::cout << f << std::endl;
	return (0);
}

int	main(void)
{
	int num[] = {0, 1, 2, 3, 4};
	std::string str[] = {"42KL", "42IP", "42PP", "42PR", "42SG"};
	float fl[] = {0.1, 1.2, 2.3, 3.4, 4.5};
	int	length = 5;

	iter<int, void>(num, length, printNum);
	std::cout << std::endl;
	iter<std::string, void>(str, length, printStr);
	std::cout << std::endl;
	iter<float, int>(fl, length, printFloat);
	std::cout << std::endl;
	iter<int, void>(num, length, printT);
	std::cout << std::endl;
	return (0);
}
