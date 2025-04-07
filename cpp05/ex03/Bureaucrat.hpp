/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:32:44 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/04 21:37:50 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"

# include <iostream>
# include <exception>
# include <string>

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator = (const Bureaucrat &copy);
		~Bureaucrat();

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		std::string	getName() const;
		int		getGrade() const;
		void	increment();
		void	decrement();
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);

	private:
		const std::string	name;
		int					grade;
};

std::ostream &operator << (std::ostream &fout, const Bureaucrat &obj);

#endif

