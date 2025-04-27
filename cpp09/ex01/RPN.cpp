/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:42:46 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/27 22:39:57 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &copy)
{
	this->stack = copy.stack;
}

RPN	&RPN::operator = (const RPN &copy)
{
	if (this != &copy)
		this->stack = copy.stack;
	return (*this);
}

RPN::~RPN() {}

const char *InvalidInputException::what() const throw()
{
	return ("Exception: Error: Input is invalid");
}

void	RPN::parseInput(std::string input)
{
	if (input.empty() || input[0] == ' ' || input[input.size() - 1] == ' ')
		throw (InvalidInputException());
	for (size_t i = 0; i < input.size(); i++)
	{
		if (i % 2 == 0)
		{
			if (!(std::isdigit(input[i])) && input[i] != '+' &&
				input[i] != '-' && input[i] != '*' && input[i] != '/')
				throw (InvalidInputException());
		}
		else
		{
			if (input[i] != ' ')
				throw (InvalidInputException());
		}
	}
}

int		RPN::calculateRPN(char op, int a, int b)
{
	switch (op)
	{
		case ('+'):
			return (a + b);

		case ('-'):
			return (a - b);

		case ('*'):
			return (a * b);

		case ('/'):
			return (a / b);

		default:
			return (0);
	}
}

void	RPN::operateRPN(char op)
{
	int	temp1 = this->stack.top();
	this->stack.pop();
	int	temp2 = this->stack.top();
	this->stack.pop();
	this->stack.push(calculateRPN(op, temp2, temp1));
}

void	RPN::solveRPN(std::string input)
{
	try
	{
		int	numCounter = 0;

		parseInput(input);
		for (size_t i = 0; i < input.size(); i++)
		{
			switch (input[i])
			{
				case ('0'): case ('1'): case ('2'): case ('3'):
				case ('4'): case ('5'): case ('6'): case ('7'):
				case ('8'): case ('9'):
					this->stack.push(input[i] - '0');
					numCounter++;
					break ;

				case ('+'): case ('-'): case ('*'): case ('/'):
					if (numCounter <= 1)
						throw (InvalidInputException());
					numCounter--;
					operateRPN(input[i]);
					break ;

				case (' '):
					break ;
			}
		}
		if (this->stack.size() != 1)
			throw (InvalidInputException());
		else
			std::cout << this->stack.top() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
