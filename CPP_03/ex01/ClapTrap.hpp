/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:07:01 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 19:49:20 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
 
#include <string>
#include "Colors.hpp"

# define CLAPTRAP_DEFAULT_HIT_POINTS 10
# define CLAPTRAP_DEFAULT_ENERGY_POINTS 10
# define CLAPTRAP_DEFAULT_ATTACK_DAMAGE 0

class ClapTrap{
	
	protected:
		
		std::string _Name;
		unsigned int			_HitPoints;
		unsigned int			_EnergyPoints;
		unsigned int			_AttackDamage;

		unsigned int defaultHitPoints;			// Default health points of robot
		unsigned int defaultAttackDamagePoints;	// Default damage points that robot can do
		unsigned int defaultEnergyPoints;		// Default energy points of robot
		
    public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & source);
		~ClapTrap();
		ClapTrap & operator=( ClapTrap const & source);

		std::string _getName() const;
		unsigned int _getHitPoints() const;
		unsigned int _getEnergyPoints() const;
		unsigned int _getAttackDamage() const;

		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);			

};

#endif
