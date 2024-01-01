/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:00:10 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/25 16:03:00 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"
#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

//	*========= Constructor & Destructor =========*
Weapon::Weapon(std::string weapon)
{   
    this->_type = weapon;
    return;
}

Weapon::~Weapon()
{
    std::cout << "Weapon " << RED << this->getType() << RESET << " disappeared (destructor called)." << std::endl;
    return;
}

//	*========= Getters & Setters =========*
const std::string &Weapon::getType() const
{
    return this->_type;
}

void Weapon::setType(std::string const new_type)
{
    if (new_type.empty())
    {
        this->_type = "";
        std::cout << "Weapon " << RED << this->getType() << RESET << " has been changed to bare hands" << std::endl;
    }
    else
    {
        std::cout << "Weapon " << RED << this->getType() << RESET << " has been changed to ";
        this->_type = new_type;
        std::cout << RED << this->getType() << std::endl;
    }
    return;
}