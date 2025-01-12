/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:32:14 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/12 17:13:19 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = nbr << this->frac_bit;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = roundf(nbr * (1 << this->frac_bit));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator = (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

float	Fixed::toFloat(void) const
{
	return ((double)this->raw / (double)(1 << this->frac_bit));
}

int	Fixed::toInt(void) const
{
	return (this->raw >> this->frac_bit);
}

std::ostream &operator << (std::ostream &os, Fixed const &object)
{
	return (os << object.toFloat());
}
