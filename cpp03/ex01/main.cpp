/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:36:30 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/03/03 00:14:20 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap st("Ryo");
	ScavTrap st2(st);
	ScavTrap st3("Nijika");
	ScavTrap st4;

	st.guardGate();
	st.attack("Kita");
	st2.attack("Bocchi");
	st3.takeDamage(10);
	st4 = st3;
	st4.beRepaired(110);
	st4.takeDamage(200);
	st3.beRepaired(10);
	for (int a = 0; a < 50; a++)
		st.attack("Money");
	st2.takeDamage(199);
	st2.attack("Guitar Hero");
	return (0);
}
