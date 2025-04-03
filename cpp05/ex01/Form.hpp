/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:40:36 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/04/03 16:33:55 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, const int gr_sign, const int gr_exec);
		Form(const Form &copy);
		Form &operator = (const Form &copy);
		~Form();

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
		bool		getIsSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		void		beSigned(const Bureaucrat &b);

	private:
		const std::string	name;
		bool				is_signed;
		const int			gr_sign;
		const int			gr_exec;
};

std::ostream &operator << (std::ostream &fout, const Form &obj);

#endif
