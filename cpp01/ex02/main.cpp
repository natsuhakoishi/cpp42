/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:33:21 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/11 19:42:31 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address of the string variable: " << &string << std::endl;
	std::cout << "Address of the string pointer: " << stringPTR << std::endl;
	std::cout << "Address of the string reference: " << &stringREF << std::endl;

	std::cout << "Value of the string variable: " << string << std::endl;
	std::cout << "Value of the string pointer: " << *stringPTR << std::endl;
	std::cout << "Value of the string reference: " << stringREF << std::endl;

	return (0);
}
