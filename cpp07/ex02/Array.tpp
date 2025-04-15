/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:43:48 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/15 21:14:18 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Array: Default Constructor called" << std::endl;
	this->length = 0;
	this->array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array: Default Constructor (/w Args) called" << std::endl;
	this->length = n;
	this->array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	std::cout << "Array: Copy Constructor called" << std::endl;
	this->length = copy.length;
	this->array = new T[this->length];
	for (unsigned int i = 0; i < this->length; i++)
		this->array[i] = copy.array[i];
}

template <typename T>
Array<T> &Array<T>::operator = (const Array &copy)
{
	std::cout << "Array: Copy Assignment Operator called" << std::endl;
	if (this != &copy)
	{
		delete[] this->array;
		this->length = copy.length;
		this->array = new T[this->length];
		for (unsigned int i = 0; i < this->length; i++)
			this->array[i] = copy.array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array: Destructor called" << std::endl;
	delete[] this->array;
}

template <typename T>
T &Array<T>::operator [] (unsigned int index)
{
	if (index >= length)
		throw(Array::OutOfBoundException());
	return (array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->length);
}

#endif
