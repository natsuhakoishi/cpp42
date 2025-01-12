/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:37:54 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/11 19:12:09 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*qiqi = newZombie("qiqi");
	qiqi->announce();
	delete qiqi;

	randomChump("Hikari");

	// Zombie def_qiqi;
	// def_qiqi.announce();

	return (0);
}
