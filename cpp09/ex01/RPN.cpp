/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:42:46 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 15:35:27 by yyean-wa         ###   ########.fr       */
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
}

RPN::~RPN() {}

const char *InvalidInputException::what() const throw()
{
	return ("Exception: Error: Input is invalid");
}

void	RPN::cookRPN(std::string input)
{
	// main rpn logic
}
