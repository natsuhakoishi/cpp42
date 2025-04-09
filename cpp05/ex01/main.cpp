/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:35:45 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/10 05:55:15 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	nijika("Nijika", 1);
		Bureaucrat	ryo("Ryo", 30);
		Bureaucrat	kita("kita", 149);
		Bureaucrat	bocchi("Bocchi", 87);

		// Form exec grade havent use in ex01, so put 1 (any number also can)
		Form	doritoForm("dorito", 29, 1);
		Form	moneyForm("100 yen", 100, 1);
		Form	kitanForm("kitan kitan", 139, 1);
		Form	copyForm(doritoForm);

		nijika.signForm(doritoForm);
		ryo.signForm(moneyForm);
		kita.signForm(kitanForm);
		bocchi.signForm(copyForm);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
