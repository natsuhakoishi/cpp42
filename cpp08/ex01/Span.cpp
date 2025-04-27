/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:52:48 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/27 23:38:35 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span &copy)
{
	this->N = copy.N;
	this->container = copy.container;
}

Span	&Span::operator = (const Span &copy)
{
	if (this != &copy)
	{
		this->N = copy.N;
		this->container = copy.container;
	}
	return (*this);
}

Span::~Span() {}

const char	*ContainerFullException::what() const throw()
{
	return ("Exception: The Container is Full");
}

const char *SpanNotFoundException::what() const throw()
{
	return ("Exception: Span Not Found");
}

void	Span::addNumber(unsigned int nbr)
{
	if (this->container.size() >= N)
		throw (ContainerFullException());
	this->container.push_back(nbr);
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
	for (std::vector<unsigned int>::iterator i = this->container.begin(); i < this->container.end(); i++)
		std::cout << *i << std::endl;
}

int	Span::shortestSpan()
{
	if (this->container.size() <= 1)
		throw (SpanNotFoundException());
	std::sort(this->container.begin(), this->container.end());
	unsigned int	span = this->container[1] - this->container[0];
	for (size_t i = 1; i < this->container.size() - 1; i++)
	{
		if ((this->container[i + 1] - this->container[i]) < span)
			span = this->container[i + 1] - this->container[i];
	}
	return (span);
}

int	Span::longestSpan()
{
	if (this->container.size() <= 1)
		throw (SpanNotFoundException());
	std::sort(this->container.begin(), this->container.end());
	unsigned int	span = this->container.back() - this->container.front();
	return (span);
}
