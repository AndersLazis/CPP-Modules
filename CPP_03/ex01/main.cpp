/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:07:34 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 19:51:43 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
		
	std::cout << "============ Destructors called ============\n";
    return 0;
}
