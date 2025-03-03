/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:12:48 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/03 00:14:14 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ct("Ryo");
	ClapTrap ct2(ct);
	ClapTrap ct3("Nijika");
	ClapTrap ct4;

	ct.attack("Kita");
	ct2.attack("Bocchi");
	ct3.takeDamage(1);
	ct4 = ct3;
	ct4.beRepaired(10);
	ct4.takeDamage(19);
	ct3.beRepaired(91);
	ct.attack("Nijika I");
	ct.attack("Nijika II");
	ct.attack("Nijika III");
	ct.attack("Nijika IV");
	ct.attack("Nijika V");
	ct.attack("Nijika VI");
	ct.attack("Nijika VII");
	ct.attack("Nijika VIII");
	ct.attack("Nijika IX");
	ct.attack("Nijika X");
	ct2.takeDamage(99);
	ct2.attack("Nijika XI");
	return (0);
}
