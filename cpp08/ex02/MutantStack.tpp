/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:50:20 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/24 20:14:29 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T, class CT>
MutantStack<T, CT>::MutantStack() {}

template <typename T, class CT>
MutantStack<T, CT>::MutantStack(const MutantStack &copy) { *this = copy; }

template <typename T, class CT>
MutantStack<T, CT>	&MutantStack<T, CT>::operator = (const MutantStack &copy) { (void)copy; return (*this); }

template <typename T, class CT>
MutantStack<T, CT>::~MutantStack() {}

template <typename T, class CT>
typename MutantStack<T, CT>::iterator	MutantStack<T, CT>::begin()
{
	return (this->c.begin());
}

template <typename T, class CT>
typename MutantStack<T, CT>::iterator	MutantStack<T, CT>::end()
{
	return (this->c.end());
}

#endif
