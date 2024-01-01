/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:30 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 19:44:04 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*  ================*= Constructors & Destructor: =*================= */

FragTrap::FragTrap() : ClapTrap() 
{     
    this->_Name = "unnamed fragtrap robot";
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    this->defaultHitPoints = 100; 
    this->defaultAttackDamagePoints = 30;
    this->defaultEnergyPoints = 100;
    std::cout << BLUE  << "FragTrap " << _Name << " was created (default constructor called)\n" << RESET;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    this->defaultHitPoints = 100; 
    this->defaultAttackDamagePoints = 30;
    this-> defaultEnergyPoints = 100;
    std::cout << BLUE  << "FragTrap " << _Name << " has been created\n" << RESET;
}

FragTrap::FragTrap(const FragTrap & source)
{
    std::cout << BLUE << "FragTrap copy constructor called\n" << RESET;
    *this = source;
}

FragTrap::~FragTrap()
{
    std::cout << BLUE << "FragTrap " << _Name << " has been destroyed\n" << RESET;
}

/*  ================*= Operator overload: =*================= */

FragTrap & FragTrap::operator=( FragTrap const & source)
{   
    std::cout << BRIGHT_GREEN << "FragTrap operator overload was called\n" << RESET;
    if(this != &source)
    {
        this->_Name = source._Name;
		this->_HitPoints = source._HitPoints;
		this->_EnergyPoints = source._EnergyPoints;
		this->_AttackDamage = source._AttackDamage;
    }
    return (*this);
}

/*  ================*= Public functions: =*================= */

void FragTrap::attack(const std::string & target)
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        if( target == this->_Name)
            std::cout << YELLOW << "FragTrap " << this->_Name << " attacks itself causing " << _AttackDamage << " points of damage \n" << RESET;
        else
            std::cout << YELLOW << "FragTrap " << this->_Name << " attacks " << target << " causing " << _AttackDamage << " points of damage \n" << RESET;
        this->_EnergyPoints--;        
    }
    else if (this->_HitPoints < 1)
    {
        std::cout << YELLOW << "FragTrap " << this->_Name << " cant't attack because it's dead and it's has no hit points \n" << RESET;
    }
    else if (this->_EnergyPoints < 1)
    {
        std::cout << YELLOW << "FragTrap " << this->_Name << " cant't attack because it's battery discharged and it's has no energy points \n" << RESET;
    }        
}

void FragTrap::highFivesGuys()
{   
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        std::cout << PURPLE << "FragTrap " << this->_Name << " says: Hey guys, I wanna give you high five! \n" << RESET;
    }
    else if (this->_HitPoints < 1)
    {
        std::cout << PURPLE << "FragTrap " << this->_Name << " cant't give a high five because it's dead\n" << RESET;
    }
    else if (this->_EnergyPoints < 1)
    {
        std::cout << PURPLE << "FragTrap " << this->_Name << " cant't give a high five because it's discharged\n" << RESET;
    }
}
