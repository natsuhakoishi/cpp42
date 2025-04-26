/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:53:07 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 13:16:45 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>

class ContainerFullException : public std::exception
{
	const char *what() const throw();
};

class SpanNotFoundException : public std::exception
{
	const char *what() const throw();
};

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span	&operator = (const Span &copy);
		~Span();

		void	addNumber(unsigned int nbr);
		void	addNumberProMax(std::vector<unsigned int> nbrs);
		int		shortestSpan();
		int		longestSpan();
		void	printElement();

	private:
		unsigned int N;
		std::vector<unsigned int> container;
};

#endif
