/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:03 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/05/06 01:32:14 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class InvalidInputException : public std::exception
{
	public:
		const char *what() const throw();
};

class MathErrorException : public std::exception
{
	public:
		const char *what() const throw();
};


class RPN
{
	public:
		RPN();
		RPN(const RPN &copy);
		RPN	&operator = (const RPN &copy);
		~RPN();
		void	solveRPN(std::string input);
		void	parseInput(std::string input);
		void	operateRPN(char op);
		int		calculateRPN(char op, int a, int b);

	private:
		std::stack<int>	stack;
};

#endif
