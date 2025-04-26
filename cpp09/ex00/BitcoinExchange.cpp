/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:41:03 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 15:34:31 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	this->data = copy.data;
}

BitcoinExchange	&BitcoinExchange::operator = (const BitcoinExchange &copy)
{
	if (this != &copy)
		this->data = copy.data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

const char *InvalidInputException::what() const throw()
{
	return ("Exception: Error: Input is invalid");
}

const char *ValueNotValidException::what() const throw()
{
	return ("Exception: Error: Value must be positive and between 0 ~ 1000");
}

void	BitcoinExchange::readCSV()
{
	std::fstream	csv;
	std::string		date;
	std::string		rateStr;
	float			rate;

	csv.open("data.csv", std::ios::in);
	std::getline(csv, date);
	while (std::getline(csv, date, ','))
	{
		std::getline(csv, rateStr, '\n');
		rate = atof(rateStr.c_str());
		this->data[date] = rate;
	}
	csv.close();
}

void	BitcoinExchange::parseInput(std::string inputLine)
{
	std::string	temp;
	int			numCounter = 0;
	int			dashCounter = 0;

	this->tarikh = inputLine.substr(0, 10);
	for (size_t i = 0; i < this->tarikh.size(); i++)
	{
		if (std::isdigit(this->tarikh[i]))
			numCounter++;
		else if (this->tarikh[i] == '-')
			dashCounter++;
	}
	if (numCounter != 8 || dashCounter != 2)
		throw (InvalidInputException());
	if (inputLine.size() < 14)
		throw (InvalidInputException());
	temp = inputLine.substr(13);
	try
	{
		this->value = atof(temp.c_str());
	}
	catch(const std::exception& e)
	{
		throw (InvalidInputException());
	}
}

void	BitcoinExchange::parseDate()
{
		int	year = atoi(this->tarikh.substr(0, 4).c_str());
		int	month = atoi(this->tarikh.substr(5, 2).c_str());
		int	day = atoi(this->tarikh.substr(8, 2).c_str());
		int	calender[13] = {42, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		if (year < 1)
			throw (InvalidInputException());
		if (month < 1 || month > 12)
			throw (InvalidInputException());
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
			calender[2] = 29;
		if (day < 1 || day > calender[month])
			throw (InvalidInputException());
}

void	BitcoinExchange::parseLimit()
{
	if (this->value < 0 || this->value > 1000)
		throw (ValueNotValidException());
}

void	BitcoinExchange::exchange()
{
	std::map<std::string, float>::iterator	it = data.lower_bound(this->tarikh);

	if (this->tarikh != it->first)
	{
		if (it == data.begin())
			throw (InvalidInputException());
		it--;
	}
	std::cout << this->tarikh << " => " << this->value << " = " << std::setprecision(2) << (this->value * it->second) << std::endl;
}

void	BitcoinExchange::readInput(char *filename)
{
	std::fstream	txtFile;
	std::string		inputLine;

	txtFile.open(filename, std::ios::in);
	std::getline(txtFile, inputLine);
	while (std::getline(txtFile, inputLine))
	{
		try
		{
			parseInput(inputLine);
			parseDate();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << " => " << inputLine << std::endl;
			continue ;
		}
		try
		{
			parseLimit();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			continue ;
		}
		try
		{
			exchange();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << " => " << inputLine << std::endl;
			continue ;
		}
	}
	txtFile.close();
}
