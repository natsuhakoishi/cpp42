/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:39:56 by yyean-wa          #+#    #+#             */
/*   Updated: 2024/12/04 03:32:17 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Table.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;

	public:
		PhoneBook();
		void	add(void);
		void	search(void);
		void	print(Contact contact);
};

#endif
