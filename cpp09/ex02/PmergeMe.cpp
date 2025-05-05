/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:44 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/05/05 17:09:12 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy) { *this = copy; }

PmergeMe &PmergeMe::operator = (const PmergeMe &copy) { (void)copy; return (*this); }

PmergeMe::~PmergeMe() {}

void	PmergeMe::check_sorted()
{
	bool	v_sorted = true;
	bool	lst_sorted = true;

	for (std::vector<int>::iterator it = this->vector.begin(); it != this->vector.end() - 1; it++)
	{
		if ((*it) > *(it + 1))
		{
			v_sorted = false;
			break ;
		}
	}

	std::list<int>::iterator	it = this->list.begin();
	std::list<int>::iterator	nextIt = it;
	++nextIt;

	while (nextIt != this->list.end())
	{
		if (*it > *nextIt)
		{
			lst_sorted = false;
			break ;
		}
		it++;
		nextIt++;
	}

	std::cout << "Sort Status: Vector -> " << (v_sorted ? "Sorted" : "Not Sorted") << " | List -> " << (lst_sorted ? "Sorted" : "Not Sorted") << std::endl;
}

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

int		PmergeMe::ft_jacobsthal(int n)
{
	// Formula: J(0) = 0, J(1) = 1, J(n) = J(n-1) + 2 * J(n-2)
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (ft_jacobsthal(n - 1) + (2 * ft_jacobsthal(n - 2)));
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
	for (std::vector<std::pair<int, int> >::iterator it = v.begin(); it != v.end(); it++)
		std::cout << "(" << (*it).first << ", " << (*it).second << "), ";
	std::cout << std::endl;
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
	std::vector<int>	tbiVector;

	for (std::vector<std::pair<int, int> >::iterator	it = pair.begin(); it != pair.end(); it++)
	{
		tbiVector.push_back((*it).first);
		this->vector.push_back((*it).second);
	}

	this->vector.insert(this->vector.begin(), tbiVector.front());
	tbiVector.erase(tbiVector.begin());

	int	n = 2;
	int	js = 0;
	std::vector<int>::iterator	itTbiVector = tbiVector.begin();
	std::vector<int>::iterator	itTemp;

	while (1)
	{
		itTemp = tbiVector.begin();
		js = ft_jacobsthal(n);
		if (js >= (int)tbiVector.size())
			break ;
		std::advance(itTemp, js - 1);
		tbiVector.insert(itTbiVector, *itTemp);
		tbiVector.erase(itTemp + 1);

		// Debug Usage
		// std::cout << "this->vector" << std::endl;
		// for (std::vector<int>::iterator it = this->vector.begin(); it != this->vector.end(); it++)
		// 	std::cout << " " << *it;
		// std::cout << std::endl;
		// std::cout << "tbiVector" << std::endl;
		// for (std::vector<int>::iterator itv = tbiVector.begin(); itv != tbiVector.end(); itv++)
		// 	std::cout << " " << *itv;
		// std::cout << std::endl;

		n++;
		itTbiVector++;
	}

	for (std::vector<int>::iterator	it = tbiVector.begin(); it != tbiVector.end(); it++)
		this->vector.insert(std::lower_bound(this->vector.begin(), this->vector.end(), *it), *it);

	if (vecIsOdd == true)
		this->vector.insert(std::lower_bound(this->vector.begin(), this->vector.end(), lastValue), lastValue);
}

void	PmergeMe::mergeSortList(std::list<std::pair<int, int> > &lst)
{
	if (lst.size() < 2)
		return ;

	std::list<std::pair<int, int> >::iterator	itMiddle = lst.begin();
	std::advance(itMiddle, lst.size() / 2);
	std::list<std::pair<int, int> >	firstHalf(lst.begin(), itMiddle);
	std::list<std::pair<int, int> >	secondHalf(itMiddle, lst.end());

	mergeSortList(firstHalf);
	mergeSortList(secondHalf);
	lst.clear();

	std::list<std::pair<int, int> >::iterator	itFirstHalf = firstHalf.begin();
	std::list<std::pair<int, int> >::iterator	itSecondHalf = secondHalf.begin();
	while (itFirstHalf != firstHalf.end() && itSecondHalf != secondHalf.end())
	{
		if ((*itFirstHalf).second < (*itSecondHalf).second)
		{
			lst.push_back(*itFirstHalf);
			itFirstHalf++;
		}
		else
		{
			lst.push_back(*itSecondHalf);
			itSecondHalf++;
		}
	}

	while (itFirstHalf != firstHalf.end())
	{
		lst.push_back(*itFirstHalf);
		itFirstHalf++;
	}
	while (itSecondHalf != secondHalf.end())
	{
		lst.push_back(*itSecondHalf);
		itSecondHalf++;
	}
	// Debug usage
	// for (std::list<std::pair<int, int> >::iterator it = lst.begin(); it != lst.end(); it++)
	// 	std::cout << "(" << (*it).first << ", " << (*it).second << "), ";
	// std::cout << std::endl;
}

void	PmergeMe::sortList()
{
	std::list<std::pair<int, int> >		pair;
	std::pair<int, int>					temp;

	bool	lstIsOdd = false;
	int		lastValue;

	if (this->list.size() <= 1)
		return ;
	if (this->list.size() % 2 == 1)
	{
		lstIsOdd = true;
		lastValue = *(--this->list.end());
		this->list.pop_back();
	}

	std::list<int>::iterator	itTmp;
	for (std::list<int>::iterator it = this->list.begin(); it != this->list.end(); std::advance(it, 2))
	{
		itTmp = it;
		std::advance(itTmp, 1);
		temp = std::make_pair(*it, *itTmp);
		if (temp.first > temp.second)
		{
			int swap = temp.first;
			temp.first = temp.second;
			temp.second = swap;
		}
		pair.push_back(temp);
	}
	mergeSortList(pair);

	this->list.clear();
	std::list<int>	tbiList;

	for (std::list<std::pair<int, int> >::iterator	it = pair.begin(); it != pair.end(); it++)
	{
		tbiList.push_back((*it).first);
		this->list.push_back((*it).second);
	}

	this->list.insert(this->list.begin(), tbiList.front());
	tbiList.erase(tbiList.begin());

	int	n = 2;
	int	js = 0;
	std::list<int>::iterator	itTbiList = tbiList.begin();
	std::list<int>::iterator	itTemp;
	std::list<int>::iterator	itErase;

	while (1)
	{
		itTemp = tbiList.begin();
		js = ft_jacobsthal(n);
		if (js >= (int)tbiList.size())
			break ;
		std::advance(itTemp, js - 1);
		tbiList.insert(itTbiList, *itTemp);
		itErase = itTemp;
		std::advance(itErase, 1);
		tbiList.erase(itErase);
		n++;
		itTbiList++;
	}

	for (std::list<int>::iterator	it = tbiList.begin(); it != tbiList.end(); it++)
		this->list.insert(std::lower_bound(this->list.begin(), this->list.end(), *it), *it);

	if (lstIsOdd == true)
		this->list.insert(std::lower_bound(this->list.begin(), this->list.end(), lastValue), lastValue);
}
