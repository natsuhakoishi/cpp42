/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Table.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:27:59 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/13 21:32:59 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Table.hpp"

std::string	to_string(int n)
{
	std::ostringstream oss;
	oss << n;
	return (oss.str());
}

std::string	space(int n)
{
	return (std::string(n, ' '));
}

std::string	wide_adjust(std::string output, size_t limit)
{
	if (output.size() > limit)
	{
		output.resize(limit);
		output[limit - 1] = '.';
	}
	return (output);
}

int	table(Contact contacts[8])
{
	int	index = 0;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].get_first_name().empty())
		{
			index++;
			std::string	output = wide_adjust(to_string(i + 1), 10);
			std::cout << "|" << space(10 - output.size()) << output;
			output = wide_adjust(contacts[i].get_first_name(), 10);
			std::cout << "|" << space(10 - output.size()) << output;
			output = wide_adjust(contacts[i].get_last_name(), 10);
			std::cout << "|" << space(10 - output.size()) << output;
			output = wide_adjust(contacts[i].get_nickname(), 10);
			std::cout << "|" << space(10 - output.size()) << output;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << "---------------------------------------------" << std::endl;
	return (index);
}
