/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:18:00 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/14 06:24:24 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <climits>
# include <cstdlib>

class ScalarConverter
{
	public:
		static void	convert(std::string literal);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator = (const ScalarConverter &copy);
		~ScalarConverter();
};

enum
{
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	ERROR = 5
};

#endif
