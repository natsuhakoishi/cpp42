/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:04:11 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/13 21:32:47 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

std::string	Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

void	Contact::set_first_name(std::string input)
{
	this->first_name = input;
}

void	Contact::set_last_name(std::string input)
{
	this->last_name = input;
}

void	Contact::set_nickname(std::string input)
{
	this->nickname = input;
}

void	Contact::set_phone_number(std::string input)
{
	this->phone_number = input;
}

void	Contact::set_darkest_secret(std::string input)
{
	this->darkest_secret = input;
}
