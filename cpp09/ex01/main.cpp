/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:42:57 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 15:32:31 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid arguments" << std::endl;
		std::cout << "Hints Example: 42 42 +" << std::endl;
		return (1);
	}

	std::string	input(argv[1]);

	if (input.empty())
	{
		std::cout << "Error: Empty string in arguments" << std::endl;
		return (1);
	}

	RPN	rpn;
	rpn.cookRPN(input);
}
