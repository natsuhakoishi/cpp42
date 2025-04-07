/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:49:20 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/07 19:03:20 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include <string>

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator = (const Intern &copy);
		~Intern();
		AForm *makeForm(std::string form, std::string target);

		class InvalidForm : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
