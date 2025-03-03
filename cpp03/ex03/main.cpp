/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:36:30 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/03 00:47:11 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap dt("Ryo");
	DiamondTrap dt2(dt);
	DiamondTrap dt3("Nijika");
	DiamondTrap dt4;
	dt4 = dt3;

	dt.whoAmI();
	dt2.whoAmI();
	dt3.whoAmI();
	dt4.whoAmI();
	dt.highFiveGuys();
	dt2.takeDamage(999);
	dt3.attack("Ryo who dont return money");
	dt4.guardGate();
	return (0);
}
