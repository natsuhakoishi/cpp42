/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 02:42:31 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/04 02:54:40 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "\033[31m---Test for WrongAnimal && WrongCat---\033[0m" << std::endl;
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrong->makeSound();
	wrongCat->makeSound(); //should output the wrongAnimal output(not the wrongCat)

	delete(meta);
	delete(j);
	delete(i);
	delete(wrong);
	delete(wrongCat);
	return 0;
}
