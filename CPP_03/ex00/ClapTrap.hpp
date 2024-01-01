/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:07:01 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 19:59:04 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>

class ClapTrap{

    private:
    
		std::string _Name;
		unsigned int			_HitPoints;
		unsigned int			_EnergyPoints;
		unsigned int			_AttackDamage;

		static unsigned int const defaultHitPoints = 10;			// Default health points of robot
		static unsigned int const defaultAttackDamagePoints = 0; // Default damage points that robot can do
		static unsigned int const defaultEnergyPoints = 10;		// Default energy points of robot

    public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & source);
		~ClapTrap();
		ClapTrap & operator=( ClapTrap const & source);

		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string _getName() const;
		unsigned int _getHitPoints() const;
		unsigned int _getEnergyPoints() const;
		unsigned int _getAttackDamage() const;		

};

#endif
