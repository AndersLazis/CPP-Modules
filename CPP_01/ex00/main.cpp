/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:30:39 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/15 18:08:01 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie *Ivan = newZombie("Ivan");
	Zombie *Mikhail = newZombie("Mikhail");
	Zombie *Alexander = newZombie("Alexander");

	delete Ivan;
	delete Mikhail;
	delete Alexander;


	std::cout << std::endl; 
	randomChump("Vladimir");
	randomChump("Leonid");

	return 0;
}