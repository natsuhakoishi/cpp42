/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:44 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/05/04 22:06:41 by yyean-wa         ###   ########.fr       */
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

void	PmergeMe::mergeSortVector(std::vector<std::pair<int, int> > &v)
{
	if (v.size() < 2)
		return ;

	std::vector<std::pair<int, int> >::iterator	itMiddle = v.begin() + (v.size() / 2);
	std::vector<std::pair<int, int> >	firstHalf(v.begin(), itMiddle);
	std::vector<std::pair<int, int> >	secondHalf(itMiddle, v.end());

	mergeSortVector(firstHalf);
	mergeSortVector(secondHalf);
	v.clear();

	std::vector<std::pair<int, int> >::iterator	itFirstHalf = firstHalf.begin();
	std::vector<std::pair<int, int> >::iterator	itSecondHalf = secondHalf.begin();
	while (itFirstHalf != firstHalf.end() && itSecondHalf != secondHalf.end())
	{
		if ((*itFirstHalf).second < (*itSecondHalf).second)
		{
			v.push_back(*itFirstHalf);
			itFirstHalf++;
		}
		else
		{
			v.push_back(*itSecondHalf);
			itSecondHalf++;
		}
	}

	while (itFirstHalf != firstHalf.end())
	{
		v.push_back(*itFirstHalf);
		itFirstHalf++;
	}
	while (itSecondHalf != secondHalf.end())
	{
		v.push_back(*itSecondHalf);
		itSecondHalf++;
	}
	// Debug usage
	// for (std::vector<std::pair<int, int> >::iterator it = v.begin(); it != v.end(); it++)
	// 	std::cout << "(" << (*it).first << ", " << (*it).second << "), ";
	// std::cout << std::endl;
}

void	PmergeMe::sortVector()
{
	std::vector<std::pair<int, int> >	pair;
	std::pair<int, int>					temp;

	bool	vecIsOdd = false;
	int		lastValue;

	if (this->vector.size() <= 1)
		return ;
	if (this->vector.size() % 2 == 1)
	{
		vecIsOdd = true;
		lastValue = *(this->vector.end() - 1);
		this->vector.pop_back();
	}

	for (std::vector<int>::iterator it = this->vector.begin(); it != this->vector.end(); it += 2)
	{
		temp = std::make_pair(*it, *(it + 1));
		if (temp.first > temp.second)
		{
			int swap = temp.first;
			temp.first = temp.second;
			temp.second = swap;
		}
		pair.push_back(temp);
	}
	mergeSortVector(pair);
	this->vector.clear();
}
