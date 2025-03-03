/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 02:42:31 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/04 04:00:28 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	std::cout << "\n\033[33m--- PDF Test >> Example ---\033[0m\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; // should not create a leak
	delete i;

	std::cout << "\n\033[33m--- PDF Test >> Animal Array Test ---\033[0m\n";
	const int size = 4;
	Animal *animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();
	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n\033[33m--- Deep Copy Test (CC)---\033[0m\n";
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog(*dog1);
	delete dog1;
	delete dog2;

	std::cout << "\n\033[33m--- Deep Copy Test (CAO) ---\033[0m\n";
	Cat cat1;
	Cat cat2;
	cat2 = cat1;

	return (0);
}

