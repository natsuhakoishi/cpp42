/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Table.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:28:01 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/12/04 03:37:39 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TABLE_HPP
# define TABLE_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"

std::string	to_string(int n);
std::string	space(int n);
std::string	wide_adjust(std::string output, size_t limit);
int			table(Contact contacts[8]);

#endif
