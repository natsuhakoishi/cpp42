/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:24:46 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/15 19:00:04 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "----- PDF Test -----" << std::endl;
	std::cout << "PDF test for std::string, int type" << std::endl;
	std::cout << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	float	f1 = 42.2f;
	float	f2 = 88.8f;
	double	d1 = 42.4;
	double	d2 = 88.6;
	char	c1 = 'A';
	char	c2 = 'Z';

	std::cout << std::endl;
	std::cout << "----- Self Test -----" << std::endl;
	std::cout << "Self test for float, double, char type" << std::endl;
	std::cout << std::endl;

	std::cout << "----- Min Test -----" << std::endl;
	std::cout << std::endl;
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min(f1, f2) = " << min(f1, f2) << std::endl;
	std::cout << std::endl;
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min(d1, d2) = " << min(d1, d2) << std::endl;
	std::cout << std::endl;
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "min(c1, c2) = " << min(c1, c2) << std::endl;
	std::cout << std::endl;

	std::cout << "----- Max Test -----" << std::endl;
	std::cout << std::endl;
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "max(f1, f2) = " << max(f1, f2) << std::endl;
	std::cout << std::endl;
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "max(d1, d2) = " << max(d1, d2) << std::endl;
	std::cout << std::endl;
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << "max(c1, c2) = " << max(c1, c2) << std::endl;
	std::cout << std::endl;

	std::cout << "----- Swap Test -----" << std::endl;
	std::cout << std::endl;
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	swap(f1, f2);
	std::cout << "swap(f1, f2) > f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << std::endl;
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	swap(d1, d2);
	std::cout << "swap(d1, d2) > d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << std::endl;
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
	swap(c1, c2);
	std::cout << "swap(c1, c2) > c1 = " << c1 << ", c2 = " << c2 << std::endl;
	std::cout << std::endl;
	return (0);
}
