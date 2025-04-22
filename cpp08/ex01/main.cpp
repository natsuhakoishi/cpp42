/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:53:25 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/22 21:06:20 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main (void)
{
	std::cout << "----- PDF Test -----" << std::endl;
	std::cout << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "----- Self Test -----" << std::endl;
	std::cout << std::endl;

	std::cout << "----- Add many numbers to Span in one call -----" << std::endl;
	std::cout << std::endl;

	Span	test = Span(42);
	std::vector<unsigned int>	container;

	for (unsigned int i = 0; i < 42; i++)
		container.push_back(i);
	test.addNumberProMax(container);
	test.printElement();

	std::cout << std::endl;
	std::cout << "----- Check Span -----" << std::endl;
	std::cout << std::endl;

	//Span sp = {6, 3, 17, 9 ,11};
	std::cout << "Shortest Span of sp: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span of sp: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	//Span test = {1 ~ 41};
	std::cout << "Shortest Span of test: " << test.shortestSpan() << std::endl;
	std::cout << "Longest Span of test: " << test.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "----- Check Exception -----" << std::endl;
	std::cout << std::endl;
	try //Test container full
	{
		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try //Test no span found
	{
		Span	empty;
		empty.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----- Test Span with > 10,000 numbers -----" << std::endl;
	std::cout << std::endl;

	Span	k = Span(14242);

	srand(static_cast<unsigned int>(time(0)));
	for (size_t i = 0; i < 14242; i++)
	{
		unsigned int	random = static_cast<unsigned int>(rand());
		k.addNumber(random);
	}
	// k.printElement();
	std::cout << "Shortest Span of k: " << k.shortestSpan() << std::endl;
	std::cout << "Longest Span of k: " << k.longestSpan() << std::endl;
	std::cout << std::endl;

	return (0);
}
