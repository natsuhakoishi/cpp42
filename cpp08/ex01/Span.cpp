/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:52:48 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/22 21:03:08 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Span: Default Constructor called" << std::endl;
	this->N = 0;
}

Span::Span(unsigned int N)
{
	std::cout << "Span: Default Constructor /w Arg called" << std::endl;
	this->N = N;
}

Span::Span(const Span &copy)
{
	std::cout << "Span: Copy Constructor called" << std::endl;
	this->N = copy.N;
	this->container = copy.container;
}

Span	&Span::operator = (const Span &copy)
{
	std::cout << "Span: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		this->N = copy.N;
		this->container = copy.container;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Span: Destructor called" << std::endl;
}

void	Span::addNumber(unsigned int nbr)
{
	if (container.size() >= N)
		throw (ContainerFullException());
	container.push_back(nbr);
}

void	Span::addNumberProMax(std::vector<unsigned int> nbrs)
{
	if (nbrs.size() + this->container.size() > N)
		throw (ContainerFullException());
	for (std::vector<unsigned int>::iterator i = nbrs.begin(); i < nbrs.end(); i++)
		addNumber(*i);
}

void	Span::printElement()
{
	for (std::vector<unsigned int>::iterator i = container.begin(); i != this->container.end(); i++)
		std::cout << *i << std::endl;
}

int	Span::shortestSpan()
{
	if (container.size() <= 1)
		throw (SpanNotFoundException());
	std::sort(this->container.begin(), this->container.end());
	unsigned int	span = container[1] - container[0];
	for (size_t i = 1; i < this->container.size() - 1; i++)
	{
		if ((container[i + 1] - container[i]) < span)
			span = container[i + 1] - container[i];
	}
	return (span);
}

int	Span::longestSpan()
{
	if (container.size() <= 1)
		throw (SpanNotFoundException());
	std::sort(this->container.begin(), this->container.end());
	unsigned int	span = container.back() - container.front();
	return (span);
}
