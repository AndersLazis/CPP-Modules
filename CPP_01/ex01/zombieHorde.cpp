/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:42:09 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/15 19:23:03 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* ZombieHordePtr = nullptr;
   try {
	ZombieHordePtr = new Zombie[N];
   } 
   catch (const std::bad_alloc& e) {
	std::cerr << "Failed to allocate memory: " << e.what() << std::endl;
	return nullptr;
   }
	for (int i = 0; i < N; i++)	{
		ZombieHordePtr[i].setName(name);
	}
	for (int j = 0; j < N; j++)	{
		ZombieHordePtr[j].announce();
	}
	return ZombieHordePtr;
}
