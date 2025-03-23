/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:32:46 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/23 18:21:17 by yyean-wa         ###   ########.fr       */
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
		Bureaucrat *hightest = new Bureaucrat("Kita", 1);
		std::cout << "\033[92mBureaucrat [" << hightest->getName() << "] initialized successfully\033[0m" << std::endl;
		hightest->increment();
		std::cout << hightest << std::endl;
		delete hightest;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[94mGrade too high when Initialize\033[0m" << std::endl;
	try //too high grade when initialized
	{
		Bureaucrat *hightest = new Bureaucrat("Kita", 0);
		std::cout << "\033[92mBureaucrat [" << hightest->getName() << "] initialized successfully\033[0m" << std::endl;
		hightest->increment();
		std::cout << hightest << std::endl;
		delete hightest;
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
		Bureaucrat *lowtest = new Bureaucrat("Bocchi", 150);
		std::cout << "\033[92mBureaucrat [" << lowtest->getName() << "] initialized successfully\033[0m" << std::endl;
		lowtest->decrement();
		std::cout << lowtest << std::endl;
		delete lowtest;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[94mGrade too low when Initialize\033[0m" << std::endl;
	try //too low grade when initialize
	{
		Bureaucrat *lowtest = new Bureaucrat("Bocchi", 151);
		std::cout << "\033[92mBureaucrat [" << lowtest->getName() << "] initialized successfully" << std::endl;
		lowtest->decrement();
		std::cout << lowtest << std::endl;
		delete lowtest;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}
