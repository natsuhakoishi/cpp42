/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:34:09 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/04 04:09:08 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator = (const Animal &copy);
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		std::string	getType() const;

	protected:
		std::string	type;
};

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator = (const WrongAnimal &copy);
		~WrongAnimal();
		void	makeSound() const;
		std::string	getType() const;

	protected:
		std::string	type;
};

#endif
