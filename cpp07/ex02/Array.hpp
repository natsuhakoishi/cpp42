/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:43:37 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/15 20:51:50 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstdlib>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator = (const Array &copy);
		~Array();
		T	&operator [] (unsigned int index);
		unsigned int	size() const;

		class OutOfBoundException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Array: Index is Out Of Bound");
			}
		};

	private:
		T	*array;
		unsigned int	length;
};

# include "Array.tpp"

#endif
