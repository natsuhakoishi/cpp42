/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:32:46 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/25 23:23:00 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "--- Valid Bureaucrat Test ---" << std::endl; //This test should not output any error msg
	std::cout << std::endl;
	try
	{
		Bureaucrat *test = new Bureaucrat("Nijika", 29);
		std::cout << "\033[92mBureaucrat [" << test->getName() << "] initialized successfully\033[0m" << std::endl;
		test->increment();
		std::cout << *test << std::endl;
		test->decrement();
		std::cout << *test << std::endl;
		delete test;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "--- Grade TooHigh Test ---" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[94mGrade too high when Increment()\033[0m" << std::endl;
	try //too high grade when increment
	{
		Bureaucrat hightest = Bureaucrat("Kita", 1);
		std::cout << "\033[92mBureaucrat [" << hightest.getName() << "] initialized successfully\033[0m" << std::endl;
		hightest.increment();
		std::cout << hightest << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[94mGrade too high when Initialize\033[0m" << std::endl;
	try //too high grade when initialized
	{
		Bureaucrat hightest = Bureaucrat("Kita", 0);
		std::cout << "\033[92mBureaucrat [" << hightest.getName() << "] initialized successfully\033[0m" << std::endl;
		hightest.increment();
		std::cout << hightest << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "--- Grade TooLow Test ---" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[94mGrade too low when Decrement()\033[0m" << std::endl;
	try //too low grade when decrement
	{
		Bureaucrat lowtest = Bureaucrat("Bocchi", 150);
		std::cout << "\033[92mBureaucrat [" << lowtest.getName() << "] initialized successfully\033[0m" << std::endl;
		lowtest.decrement();
		std::cout << lowtest << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[94mGrade too low when Initialize\033[0m" << std::endl;
	try //too low grade when initialize
	{
		Bureaucrat lowtest = Bureaucrat("Bocchi", 151);
		std::cout << "\033[92mBureaucrat [" << lowtest.getName() << "] initialized successfully" << std::endl;
		lowtest.decrement();
		std::cout << lowtest << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "--- OCCF Test ---" << std::endl;
	std::cout << std::endl;
	Bureaucrat *a = new Bureaucrat("42KL", 5);
	Bureaucrat b(*a);
	Bureaucrat *c = new Bureaucrat("42Penang", 90);
	*c = *a;
	std::cout << "\033[92m" << *a << "\033[0m" << std::endl;
	std::cout << "\033[92m" << b << "\033[0m" << std::endl;
	std::cout << "\033[92m" << *c << "\033[0m" << std::endl;
	delete a;
	delete c;
}
