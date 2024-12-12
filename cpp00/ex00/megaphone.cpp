/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 23:10:57 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/12/04 01:00:28 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = -1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv && argv[++a])
	{
		b = -1;
		while (a > 0 && argv[a][++b])
			std::cout << (char)std::toupper(argv[a][b]);
	}
	std::cout << std::endl;
	return (0);
}
