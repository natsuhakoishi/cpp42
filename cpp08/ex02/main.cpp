/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:39:12 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/24 21:33:24 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int	main()
// {
// 	std::cout << std::endl;
// 	std::cout << "----- PDF Test -----" << std::endl;
// 	std::cout << std::endl;

// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17); // Stack is {5, 17};
// 	std::cout << "Top Element Value of the Stack: " << mstack.top() << std::endl;
// 	mstack.pop(); // Stack is {5};
// 	std::cout << "Size of Stack: " << mstack.size() << std::endl;
// 	mstack.push(3); // Stack is {5, 3};
// 	mstack.push(5); // Stack is {5, 3, 5};
// 	mstack.push(737); // Stack is {5, 3, 5, 737};
// 	//[...]
// 	mstack.push(0); // Stack is {5, 3, 5, 737, 0};
// 	std::cout << std::endl;
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it; // pointer at {3};
// 	std::cout << "Iterator position at " << *it << std::endl;
// 	--it; // pointer at {5};
// 	std::cout << "Iterator position at " << *it << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "Stack Checking" << std::endl;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack); //copy constructor check
// 	return (0);
// }

int	main(void)
{
	std::cout << std::endl;
	std::cout << "----- Self Test ------" << std::endl;
	std::cout << std::endl;

	MutantStack<int>	stack;
	std::list<int>		list;
	std::vector<int>	vector;

	//make sure all is {42, 88, 27, 64};
	stack.push(42); stack.push(88); stack.push(27); stack.push(64);
	list.push_back(42); list.push_back(88); list.push_back(27); list.push_back(64);
	vector.push_back(42); vector.push_back(88); vector.push_back(27); vector.push_back(64);

	std::cout << std::endl;
	std::cout << "--- Check Value of the First/Top and Last/Bottom Value ---" << std::endl;
	std::cout << std::endl;
	std::cout << "MutantStack Bottom(First) Element: " << *stack.begin()<< std::endl;
	std::cout << "MutantStack Top(Last) Element: " << stack.top() << std::endl;
	std::cout << "std::list First Element: " << list.front() << std::endl;
	std::cout << "std::list Last Element: " << list.back() << std::endl;
	std::cout << "std::vector First Element: " << vector.front() << std::endl;
	std::cout << "std::vector Last Element: " << vector.back() << std::endl;

	std::cout << std::endl;
	std::cout << "--- Check Value of Every Elements ---" << std::endl;
	std::cout << std::endl;

	std::cout << "MutantStack" << std::endl;
	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << "std::list" << std::endl;
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << "std::vector" << std::endl;
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "--- Try to add stuff to the Stack and check the Top Value ---" << std::endl;
	std::cout << std::endl;
	std::cout << "Top Element Value of The Stack before add new element: " << stack.top() << std::endl;
	stack.push(4242);
	std::cout << "Top Element Value of The Stack after add new element: " << stack.top() << std::endl;
	return (0);
}
