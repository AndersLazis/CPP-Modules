/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:06:41 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/16 15:14:22 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanB.hpp"

//	*========= Constructor & Destructor =========*

HumanB::HumanB(std::string const name) : _Name(name)
{
    this->_WeaponPtr = nullptr;
    std::cout << GREEN << _Name << RESET << " is here." << std::endl;
}

HumanB::~HumanB()
{
    std::cout << GREEN << _Name << RESET << " is finishes battle(destructor called)." << std::endl;
}

//	*========= Setter =========*
void HumanB::setWeapon(Weapon &givenWeaponPtr)
{
    this->_WeaponPtr = &givenWeaponPtr;
    std::cout << GREEN << _Name << RESET << " is armed with " << RED << this->_WeaponPtr->getType() << std::endl;
}

//	*========= Functions =========*
void HumanB::attack() const
{
    if(this->_WeaponPtr == nullptr || this->_WeaponPtr->getType().empty())
        std::cout << GREEN << _Name << RESET << " attacks with his bare hands" << RESET << std::endl;
    else
        std::cout << GREEN << _Name << RESET << " attacks with his " << RED << this->_WeaponPtr->getType() << RESET << std::endl;
}