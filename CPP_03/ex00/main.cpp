/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:07:34 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 20:00:42 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap First_robot("ED-209");
    ClapTrap Second_robot("T-1000");
    
    First_robot.beRepaired(0);
	// for (int i = 0; i < 9; i++) {
	// 	First_robot.attack("T-1000");
	// 	Second_robot.takeDamage(0);
	// }
	std::cout << "health: " << First_robot._getHitPoints() << std::endl;
	std::cout << "energy: " << First_robot._getEnergyPoints() << std::endl;
	First_robot.attack("T-1000");
	std::cout << "energy: " << First_robot._getEnergyPoints() << std::endl;
	std::cout << "health: " << First_robot._getHitPoints() << std::endl;
	Second_robot.takeDamage(5);
	std::cout << "energy: " << Second_robot._getEnergyPoints() << std::endl;
	std::cout << "health: " << Second_robot._getHitPoints() << std::endl;
	Second_robot.beRepaired(4);
	Second_robot.attack("ED-209");
	First_robot.takeDamage(5);
	First_robot.beRepaired(5000);
	Second_robot.beRepaired(5000);
	Second_robot.attack("T-1000");
	Second_robot.takeDamage(5000);
	Second_robot.beRepaired(5000);
	std::cout << "energy: " << Second_robot._getEnergyPoints() << std::endl;
	std::cout << "health: " << Second_robot._getHitPoints() << std::endl;
	Second_robot.takeDamage(1);
    return 0;
}