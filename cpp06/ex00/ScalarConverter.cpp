/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:17:40 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/14 00:04:10 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) { *this = copy; }

ScalarConverter	&ScalarConverter::operator = (const ScalarConverter &copy) { (void)copy; return (*this); }

ScalarConverter::~ScalarConverter() {}

static bool	check_number(std::string literal)
{
	size_t	symbol = 0;
	int	decimal = 0;

	if (literal[0] == '+' || literal[0] == '-')
		symbol = 1;
	for (size_t i = symbol; i < literal.length(); i++)
	{
		if (std::isdigit(literal[i]))
			continue;
		else if (literal[i] == '.' && decimal == 0)
			++decimal;
		else
			return (false);
	}
	return (true);
}

static int	define_type(std::string literal)
{
	if (literal.empty())
		return (ERROR);
	if (!literal.compare("-inff") || !literal.compare("+inff") || !literal.compare("nanf"))
		return (FLOAT);
	if (!literal.compare("-inf") || !literal.compare("+inf") || !literal.compare("nan"))
		return (DOUBLE);
	if (literal.length() == 1 && std::isalpha(literal[0]))
		return (CHAR);
	if (literal[literal.length() - 1] == 'f' && check_number(literal.substr(0, literal.length() - 1)))
		return (FLOAT);
	if (literal.find('.') != (size_t) -1 && check_number(literal))
		return (DOUBLE);
	if (check_number(literal))
		return (INT);
	return (ERROR);
}

static void	print(char c, int i, float f, double d)
{
	// char
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(i))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	//int
	if (d >= static_cast<double>(INT_MIN) && d <= static_cast<double>(INT_MAX))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	//float
	std::cout << "float: " << f;
	if (f == static_cast<int>(f))
		std::cout << ".0";
	std::cout << "f" << std::endl;

	//double
	std::cout << "double: " << d;
	if (d == static_cast<int>(d))
		std::cout << ".0";
	std::cout << std::endl;
}

void	ScalarConverter::convert(std::string literal)
{
	char	c;
	int		i;
	float	f;
	double	d;

	switch (define_type(literal))
	{
		case CHAR:
			c = literal[0];
			print(c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
			return ;

		case INT:
			i = std::atoi(literal.c_str());
			print(static_cast<char>(i), i, static_cast<float>(i), static_cast<double>(i));
			return ;

		case FLOAT:
			f = std::strtof(literal.c_str(), 0);
			print(static_cast<char>(f), static_cast<int>(f), f, static_cast<double>(f));
			return ;

		case DOUBLE:
			d = std::strtod(literal.c_str(), 0);
			print(static_cast<char>(d), static_cast<int>(d), static_cast<float>(d), d);
			return ;
	}
	std::cout << "Error: Invalid Input" << std::endl;
}

