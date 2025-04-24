/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:40:51 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/24 20:39:41 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <list>
# include <vector>

template <typename T, class CT = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack	&operator = (const MutantStack &copy);
		~MutantStack();

		typedef typename CT::iterator iterator;
		iterator	begin();
		iterator	end();
};

# include "MutantStack.tpp"

#endif
