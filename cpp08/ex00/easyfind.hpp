/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:20:19 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/26 13:02:48 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class OccurenceNotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return ("Exception: No occurrence is found");
	}
};

template<typename T>
typename T::iterator	easyfind(T container, int occurance)
{
	typename T::iterator	result;

	result = std::find(container.begin(), container.end(), occurance);
	if (result == container.end())
		throw (OccurenceNotFoundException());
	return (result);
}

#endif
