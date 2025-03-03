/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:06:39 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/02/27 23:08:30 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "Initial values:" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "\nIncrement tests:" << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a after ++: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a after a++: " << a << std::endl;

	std::cout << "\nComparison tests:" << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "\nArithmetic tests:" << std::endl;
	Fixed c(2.5f);
	Fixed d(1.5f);
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "c + d: " << (c + d) << std::endl;
	std::cout << "c - d: " << (c - d) << std::endl;
	std::cout << "c * d: " << (c * d) << std::endl;
	std::cout << "c / d: " << (c / d) << std::endl;

	std::cout << "\nMin/Max tests:" << std::endl;
	std::cout << "Max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "Min(a, b): " << Fixed::min(a, b) << std::endl;

	std::cout << "\nDecrement tests:" << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a after --: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a after a--: " << a << std::endl;

	return 0;
}

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

