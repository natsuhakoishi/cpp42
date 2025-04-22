/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:19:49 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/22 18:43:51 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	test;

	for (int a = 0; a < 43; a++)
		test.push_back(a);
	for (int a = 0; a < 44; a++)
	{
		try
		{
			easyfind(test, a);
			std::cout << "Found " << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
