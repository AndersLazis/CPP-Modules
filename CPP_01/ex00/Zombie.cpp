/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:31:10 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/22 19:31:13 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"


//	*========= Functions =========*
void	Zombie::_announce( void )
{
	std::cout << GREEN << this->_name << ":BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

//	*========= Constructor & Destructor =========*

Zombie::Zombie()
{
	return;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->_announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead again..." << std::endl;
	return;
}