/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:44 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/05/02 21:24:57 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy) { *this = copy; }

PmergeMe &PmergeMe::operator = (const PmergeMe &copy) { (void)copy; return (*this); }

PmergeMe::~PmergeMe() {}

void	PmergeMe::fillVector(std::vector<int> temp)
{
	for (std::vector<int>::iterator	it = temp.begin(); it != temp.end(); it++)
		this->vector.push_back(*it);
}

void	PmergeMe::fillList(std::vector<int> temp)
{
	for (std::vector<int>::iterator	it = temp.begin(); it != temp.end(); it++)
		this->list.push_back(*it);
}

void	PmergeMe::printVector()
{
	for (std::vector<int>::iterator it = this->vector.begin(); it != this->vector.end(); it++)
		std::cout << " " << *it;
}

void	PmergeMe::printList()
{
	for (std::list<int>::iterator it = this->list.begin(); it != this->list.end(); it++)
		std::cout << " " << *it;
}
