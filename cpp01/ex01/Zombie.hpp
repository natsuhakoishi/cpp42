/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:38:04 by yyean-wa          #+#    #+#             */
/*   Updated: 2025/01/11 19:20:05 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();
		void	setName(std::string name);

	private:
		std::string	name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
