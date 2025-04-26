/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:03 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 15:33:35 by yyean-wa         ###   ########.fr       */
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

class RPN
{
	public:
		RPN();
		RPN(const RPN &copy);
		RPN	&operator = (const RPN &copy);
		~RPN();
		void	cookRPN(std::string input);

	private:
		std::stack<int>	stack;
};

#endif
