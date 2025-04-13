/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 05:10:22 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/14 05:44:46 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data test1;
	Data test2;
	test1.data = 42;
	test2.data = 88;

	uintptr_t	srlData1 = Serializer::serialize(&test1);
	uintptr_t	srlData2 = Serializer::serialize(&test2);
	std::cout << "Serialize: Test1 Ptr Address -> " << srlData1 << std::endl;
	std::cout << "Serialize: Test2 Ptr Address -> " << srlData2 << std::endl;

	Data	*dsrlData1 = Serializer::deserialize(srlData1);
	Data	*dsrlData2 = Serializer::deserialize(srlData2);
	std::cout << "Deserialize: Test1 Value -> " << dsrlData1->data << std::endl;
	std::cout << "Deserialize: Test2 Value -> " << dsrlData2->data << std::endl;
	return (0);
}
