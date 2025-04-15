/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:06:31 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/15 19:28:19 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T, typename F>
void	iter(T *array, int length, F (*ft)(T &))
{
	for (int i = 0; i < length; i++)
		ft(array[i]);
}

#endif
