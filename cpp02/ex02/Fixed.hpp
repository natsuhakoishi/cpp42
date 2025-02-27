/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:32:16 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/02/27 20:04:16 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator > (const Fixed &nbr) const;
		bool	operator < (const Fixed &nbr) const;
		bool	operator >= (const Fixed &nbr) const;
		bool	operator <= (const Fixed &nbr) const;
		bool	operator == (const Fixed &nbr) const;
		bool	operator != (const Fixed &nbr) const;

		float	operator + (const Fixed &nbr) const;
		float	operator - (const Fixed &nbr) const;
		float	operator * (const Fixed &nbr) const;
		float	operator / (const Fixed &nbr) const;

		Fixed	operator ++ (int);
		Fixed	operator ++ ();
		Fixed	operator -- (int);
		Fixed	operator -- ();

		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);

	private:
		int	raw;
		const static int frac_bit = 8;
};

std::ostream &operator << (std::ostream &os, Fixed const &object);

#endif
