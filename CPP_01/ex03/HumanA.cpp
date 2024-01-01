/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:01:12 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/16 14:28:00 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

#include "./includes/HumanA.hpp"

//	*========= Constructor & Destructor =========*

HumanA::HumanA(std::string const name, Weapon const &given_weapon) : _Name(name), _WeaponA(given_weapon)
{
    std::cout << YELLOW << _Name << RESET << " is here" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << YELLOW << _Name << RESET << " is finishes battle(destructor called)." << std::endl;
}

//	*========= Functions =========*
void HumanA::attack() const
{
    std::cout << YELLOW <<  _Name << RESET << " attacks with his " << RED << this->_WeaponA.getType() << RESET << std::endl;
}