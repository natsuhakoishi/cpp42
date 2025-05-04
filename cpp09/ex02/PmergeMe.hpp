/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:52 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/05/04 23:09:15 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <sys/time.h>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator = (const PmergeMe &copy);
		~PmergeMe();

		//Vector
		void	fillVector(std::vector<int> temp);
		void	printVector();
		void	sortVector();
		void	mergeSortVector(std::vector<std::pair<int, int> > &v);

		//List
		void	fillList(std::vector<int> temp);
		void	printList();
		// void	sortList();

		int		ft_jacobsthal(int n);

	private:
		std::vector<int>	vector;
		std::list<int>		list;
};

#endif
