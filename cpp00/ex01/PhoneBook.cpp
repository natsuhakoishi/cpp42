/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 01:35:50 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/11 16:05:18 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::print(Contact contact)
{
	if (!contact.get_first_name().size())
	{
		std::cout << "Failed to get info of this contact" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
}

void	PhoneBook::search(void)
{
	std::string	input;

	if (!table(this->contacts))
	{
		std::cout << "PhoneBook is Empty." << std::endl;
		std::cout << "" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select a Contact > ";
		if (std::getline(std::cin, input) && input != "")
		{
			if (input.size() == 1 && input[0] >= '1' && input[0] <= '8' && \
					this->contacts[input[0] - 1 - '0'].get_first_name().size())
				break ;
		}
		if (input != "")
			std::cout << "Invalid Input" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->contacts[input[0] - 1 - '0']);
}

void	PhoneBook::add(void)
{
	std::string	input;

	input = "";
	if (this->index > 7)
		std::cout << "(Overwrite Warning) You are now adding for Contact No: " << ((this->index % 8) + 1) << std::endl;
	else
		std::cout << "You are now adding for Contact No: " << ((this->index % 8) + 1) << std::endl;
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Enter First Name > ";
		if (std::getline(std::cin, input) && input != "")
			this->contacts[this->index % 8].set_first_name(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Enter Last Name > ";
		if (std::getline(std::cin, input) && input != "")
			this->contacts[this->index % 8].set_last_name(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Enter Nickname > ";
		if (std::getline(std::cin, input) && input != "")
			this->contacts[this->index % 8].set_nickname(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Enter Phone Number > ";
		if (std::getline(std::cin, input) && input != "")
			this->contacts[this->index % 8].set_phone_number(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Enter Darkest Secret > ";
		if (std::getline(std::cin, input) && input != "")
		{
			this->contacts[this->index % 8].set_darkest_secret(input);
			std::cout << "Sucessfully added Contact: " << this->contacts[index % 8].get_first_name() << std::endl;
		}
	}
	this->index++;
}

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	std::cout << "\033[35mWelcome to PhoneBook v4.2 by NatsuhaKoishi\033[0m" << std::endl;
}
