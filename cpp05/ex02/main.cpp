/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:35:45 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/03 21:40:50 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
int main()
{
	// working test case
	// cout << "test case pass:" << endl;
	//inititialization
	try
	{
	Form form1("Form1", 60, 60);
	Form form2("Form1", 60, 60);
	Form form3(form1);
	Bureaucrat smortman("smortman", 1);
	Bureaucrat snortman("snortman", 150);
	Bureaucrat snortman2("snortman2", 3);

	smortman.signForm(form1);
	snortman2.signForm(form3);
	snortman.signForm(form2);
	// Form form2("Form2", -1, 60);
	// Form form3("Form3", 60, -1);
	// Form form4("Form4", 1000, 59);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
