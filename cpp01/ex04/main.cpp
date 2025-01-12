/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:22:20 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/11 20:53:17 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	app_new_line(std::ifstream &infile)
{
	std::string	app_result;
	std::string	line;

	while (std::getline(infile, line))
		app_result.append(line).append("\n");
	return (app_result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid Argument. Hint: ./sed <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	std::string	filename;
	std::string	replaceFilename;
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string	find(argv[2]);
	std::string replace(argv[3]);

	filename.assign(argv[1]);
	replaceFilename.assign(argv[1]).append(".replace");
	if (!find.length() || !replace.length() || !filename.length())
	{
		std::cout << "Invalid Input. Hint: Prevent empty input." << std::endl;
		return (1);
	}
	infile.open(filename.c_str(), std::ios::in);

	std::string	text = app_new_line(infile);
	std::string	result;
	size_t	index = 0;
	size_t	find_index;

	while (index < text.length())
	{
		find_index = text.find(find, index);
		if (index == find_index)
		{
			result.append(replace);
			index += find.length();
		}
		else
		{
			result.push_back(text[index]);
			++index;
		}
	}
	outfile.open(replaceFilename.c_str(), std::ios::out);
	outfile.write(result.c_str(), result.length() - 1);
	return (0);
}
