/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:30 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 19:49:46 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*  ================*= Constructors & Destructor: =*================= */

ScavTrap::ScavTrap() : ClapTrap()
{     
    this->_Name = "unnamed claptrap robot";
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    this->defaultHitPoints = 100; 
    this->defaultAttackDamagePoints = 20;
    this->defaultEnergyPoints = 50;
    this->guardGateMode = false;
    std::cout << BLUE  << "ScavTrap " << _Name << " was created (default constructor called)\n" << RESET;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    this->defaultHitPoints = 100; 
    this->defaultAttackDamagePoints = 20;
    this->defaultEnergyPoints = 50;
    this->guardGateMode = false;
    std::cout << BLUE  << "ScavTrap " << _Name << " has been created\n" << RESET;
}

ScavTrap::ScavTrap(const ScavTrap & source) 
{
    std::cout << BLUE << "ScavTrap copy constructor called\n" << RESET;
    *this = source;
}

ScavTrap::~ScavTrap()
{
    std::cout << BLUE << "ScavTrap " << _Name << " has been destroyed\n" << RESET;
}

/*  ================*= Operator overload: =*================= */

ScavTrap & ScavTrap::operator=( ScavTrap const & source)
{   
    std::cout << BRIGHT_GREEN << "ScavTrap operator overload was called\n" << RESET;
    if(this != &source)
    {
    	// this->_Name = source._getName();
        this->_Name = source._Name;
		this->_HitPoints = source._HitPoints;
		this->_EnergyPoints = source._EnergyPoints;
		this->_AttackDamage = source._AttackDamage;
        this->guardGateMode = source.guardGateMode;
    }
    return (*this);
}

/*  ================*= Public functions: =*================= */

void ScavTrap::attack(const std::string & target)
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        if( target == this->_Name)        
            std::cout << YELLOW << "ScavTrap " << this->_Name << " attacks itself causing " << _AttackDamage << " points of damage \n" << RESET;
        else
            std::cout << YELLOW << "ScavTrap " << this->_Name << " attacks " << target << " causing " << _AttackDamage << " points of damage \n" << RESET;
        this->_EnergyPoints--;        
    }
    else if (this->_HitPoints < 1)
    {
        std::cout << YELLOW << "ScavTrap " << this->_Name << " cant't attack because it's dead and it's has no hit points \n" << RESET;
    }
    else if (this->_EnergyPoints < 1)
    {
        std::cout << YELLOW << "ScavTrap " << this->_Name << " cant't attack because it's battery discharged and it's has no energy points \n" << RESET;
    }        
}

void ScavTrap::guardGate()
{   
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0 && this->guardGateMode == false)
    {
        std::cout << PURPLE << "ScavTrap " << this->_Name << " is now in gate keeper mode\n" << RESET;
        this->guardGateMode = true;
    }
    else if (this->_HitPoints < 1)
    {
        std::cout << PURPLE << "ScavTrap " << this->_Name << " cant't be switched because it's dead\n" << RESET;
    }
    else if (this->_EnergyPoints < 1)
    {
        std::cout << PURPLE << "ScavTrap " << this->_Name << " cant't be switched because it's discharged\n" << RESET;
    }
    else if (this->guardGateMode == true)
    {
        this->guardGateMode = false;
        std::cout << PURPLE << "ScavTrap " << this->_Name << " is now in normal mode\n" << RESET;
    }
}
