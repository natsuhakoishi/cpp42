/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 05:52:01 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/14 12:52:45 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base::~Base() {}

Base	*generate(void)
{
	srand(time(0));
	int	i = rand() % 3;
	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Pointer -> Class A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Pointer -> Class B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Pointer -> Class C" << std::endl;
	else
		std::cout << "Error: Pointer Unknown Class" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Reference -> Class A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Reference -> Class B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Reference -> Class C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
	std::cout << "Error: Reference Unknown Class" << std::endl;
}

