/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:07:34 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 20:03:04 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{		

	//	***************************** CLAPTRAP *****************************  //

	std::cout << "============ ClapTrap creation ============\n";
    ClapTrap claptrap("ED-209");
	
		std::cout << "============ Action tests claptrap ============\n";
	//std::cout << fragtrap._getHitPoints() << std::endl;

	std::cout << "Health points : " << claptrap._getHitPoints() << std::endl;
	std::cout << "energy points: " << claptrap._getEnergyPoints() << std::endl;
	std::cout << "damage points: " << claptrap._getAttackDamage() << std::endl;
	
	claptrap.attack("Rusty");
	std::cout << "energy: " << claptrap._getEnergyPoints() << std::endl;
	claptrap.takeDamage(5);
	std::cout << "health: " << claptrap._getHitPoints() << std::endl;
	claptrap.beRepaired(20000);
	std::cout << "health: " << claptrap._getHitPoints() << std::endl;
	std::cout << "energy: " << claptrap._getEnergyPoints() << std::endl;
	claptrap.takeDamage(200);
	std::cout << "health: " << claptrap._getHitPoints() << std::endl;
	claptrap.beRepaired(1);
	std::cout << "health: " << claptrap._getHitPoints() << std::endl << std::endl << std::endl << std::endl;
	




	//	***************************** SCAVTRAP *****************************  //

	
	std::cout << "============ ScavTrap creation ============\n";
	ScavTrap scavtrap("WALL-E");
		
	std::cout << "============ Action tests scavtrap ============\n";
	
	std::cout << "Health points : " << scavtrap._getHitPoints() << std::endl;
	std::cout << "energy points: " << scavtrap._getEnergyPoints() << std::endl;
	std::cout << "damage points: " << scavtrap._getAttackDamage() << std::endl;
	
	scavtrap.guardGate();
	scavtrap.guardGate();
	scavtrap.guardGate();
	scavtrap.attack("Rusty");
	std::cout << "energy: " << scavtrap._getEnergyPoints() << std::endl;
	scavtrap.takeDamage(5);
	std::cout << "health: " << scavtrap._getHitPoints() << std::endl;
	scavtrap.beRepaired(20000);
	std::cout << "health: " << scavtrap._getHitPoints() << std::endl;
	std::cout << "energy: " << scavtrap._getEnergyPoints() << std::endl;
	scavtrap.takeDamage(200);
	std::cout << "health: " << scavtrap._getHitPoints() << std::endl;
	scavtrap.attack("Rusty");
	scavtrap.beRepaired(1);
	std::cout << "health: " <<  scavtrap._getHitPoints() << std::endl;
	scavtrap.guardGate();
	std::cout << std::endl << std::endl << std::endl;



	//	***************************** FRAGTRAP *****************************  //
	
	std::cout << "============ FragTrap creation ============\n";	
	FragTrap fragtrap("Rusty");

	std::cout << "============ FragTrap action tests  ============\n";
	
	std::cout << "Health points : " << fragtrap._getHitPoints() << std::endl;
	std::cout << "energy points: " << fragtrap._getEnergyPoints() << std::endl;
	std::cout << "damage points: " << fragtrap._getAttackDamage() << std::endl;
	
	fragtrap.highFivesGuys();
	fragtrap.highFivesGuys();
	fragtrap.attack("Rusty");
	
	// for (int i = 0; i < 101; i++) 
	// {
	// 	fragtrap.attack("WALL-E");
	// }
	
	std::cout << "energy: " << fragtrap._getEnergyPoints() << std::endl;
	fragtrap.takeDamage(5);
	std::cout << "health: " << fragtrap._getHitPoints() << std::endl;
	fragtrap.beRepaired(20000);
	std::cout << "health: " << fragtrap._getHitPoints() << std::endl;
	std::cout << "energy: " << fragtrap._getEnergyPoints() << std::endl;
	fragtrap.takeDamage(200);
	std::cout << "health: " << fragtrap._getHitPoints() << std::endl;
	fragtrap.beRepaired(1);
	std::cout << "health: " <<  fragtrap._getHitPoints() << std::endl;	
	fragtrap.highFivesGuys();
	std::cout << std::endl << std::endl << std::endl;

	
		
	std::cout << "============ Destructors called ============\n";
    return 0;
}
