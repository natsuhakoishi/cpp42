/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:52 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/05/01 23:13:56 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator = (const PmergeMe &copy);
		~PmergeMe();

	private:
		std::vector<int>	vector;
		std::list<int>		list;
};

#endif
