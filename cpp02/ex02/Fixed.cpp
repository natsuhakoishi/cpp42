/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:32:14 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/15 19:27:19 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->raw = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int nbr)
{
	this->raw = nbr << this->frac_bit;
}

Fixed::Fixed(const float nbr)
{
	this->raw = roundf(nbr * (1 << this->frac_bit));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed	&Fixed::operator = (const Fixed &copy)
{
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

bool	Fixed::operator > (const Fixed &nbr) const
{
	return (this->toFloat() > nbr.toFloat());
}

bool	Fixed::operator < (const Fixed &nbr) const
{
	return (this->toFloat() < nbr.toFloat());
}

bool	Fixed::operator >= (const Fixed &nbr) const
{
	return (this->toFloat() >= nbr.toFloat());
}

bool	Fixed::operator <= (const Fixed &nbr) const
{
	return (this->toFloat() <= nbr.toFloat());
}

bool	Fixed::operator == (const Fixed &nbr) const
{
	return (this->toFloat() == nbr.toFloat());
}

bool	Fixed::operator != (const Fixed &nbr) const
{
	return (this->toFloat() != nbr.toFloat());
}

float	Fixed::operator + (const Fixed &nbr) const
{
	return (this->toFloat() + nbr.toFloat());
}

float	Fixed::operator - (const Fixed &nbr) const
{
	return (this->toFloat() - nbr.toFloat());
}

float	Fixed::operator * (const Fixed &nbr) const
{
	return (this->toFloat() * nbr.toFloat());
}

float	Fixed::operator / (const Fixed &nbr) const
{
	return (this->toFloat() / nbr.toFloat());
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	nbr(*this);

	++this->raw;
	return (nbr);
}

Fixed	Fixed::operator ++ ()
{
	++this->raw;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	nbr(*this);

	--this->raw;
	return (nbr);
}

Fixed	Fixed::operator -- ()
{
	--this->raw;
	return (*this);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
