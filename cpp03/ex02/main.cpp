/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:36:30 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/03 00:14:24 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap ft("Ryo");
	FragTrap ft2(ft);
	FragTrap ft3("Nijika");
	FragTrap ft4;

	ft.highFiveGuys();
	ft.attack("Kita");
	ft2.attack("Bocchi");
	ft3.takeDamage(10);
	ft4 = ft3;
	ft4.beRepaired(110);
	ft4.takeDamage(200);
	ft3.beRepaired(10);
	for (int a = 0; a < 100; a++)
		ft.attack("Money");
	ft2.takeDamage(199);
	ft2.attack("Guitar Hero");
	return (0);
}
