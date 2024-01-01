/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:31:10 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/23 20:41:03 by aputiev          ###   ########.fr       */
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
void	Zombie::announce( void )
{
	std::cout << GREEN << this->_name << ":BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

//	*========= Constructor & Destructor =========*

Zombie::Zombie()
{
	std::cout << "Zombie appeared" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead again..." << std::endl;
	return;
}