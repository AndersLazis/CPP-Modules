/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:21 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 19:50:29 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    private:

		bool guardGateMode;

    public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & source);
		~ScavTrap();
		ScavTrap & operator=( ScavTrap const & source);
        
		void guardGate();
		void attack(const std::string & target);
};

#endif
