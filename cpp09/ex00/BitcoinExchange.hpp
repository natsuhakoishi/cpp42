/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:41:18 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 14:41:23 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>
# include <cstdlib>
# include <map>
# include <exception>

class InvalidInputException : public std::exception
{
	public:
		const char *what() const throw();
};

class ValueNotValidException : public std::exception
{
	public:
		const char *what() const throw();
};

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange	&operator = (const BitcoinExchange &copy);
		~BitcoinExchange();
		void	readCSV();
		void	readInput(char *filename);
		void	parseInput(std::string inputLine);
		void	parseDate();
		void	parseLimit();
		void	exchange();

	private:
		std::map<std::string, float>	data;
		std::string						tarikh;
		float							value;
};

#endif
