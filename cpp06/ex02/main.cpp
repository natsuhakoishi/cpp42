/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 05:52:04 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/14 12:54:37 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int	main(void)
{
	Base	*instance = generate();
	Base	*instance2 = NULL;

	identify(instance);
	identify(*instance);
	delete instance;

	identify(instance2);
	identify(*instance2);
	delete instance2;
	return (0);
}
