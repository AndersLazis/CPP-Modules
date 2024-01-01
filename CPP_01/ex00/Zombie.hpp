/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:31:18 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/22 19:31:20 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>


class Zombie
{
	private:

		std::string _name;
		void _announce( void );

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
};

#endif
