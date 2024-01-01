/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:05:40 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/25 16:31:12 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/*  ================*= Constructors & Destructor: =*================= */

ClapTrap::ClapTrap() : _Name("unnamed robot"), _HitPoints(defaultHitPoints),
 _EnergyPoints(defaultEnergyPoints), _AttackDamage(defaultAttackDamagePoints) 
{
    std::cout << BLUE << "Default constructor called\n" << RESET;
}

ClapTrap::ClapTrap(const std::string name) : _Name(name), _HitPoints(defaultHitPoints),
 _EnergyPoints(defaultEnergyPoints), _AttackDamage(defaultAttackDamagePoints) 
{
    std::cout << BLUE  << "ClapTrap "<< this->_Name << " has been created\n" << RESET;
}

ClapTrap::ClapTrap(const ClapTrap & source)
{
    *this = source;
    std::cout << BLUE << "Copy constructor called\n" << RESET;
}

ClapTrap::~ClapTrap()
{
    std::cout << BLUE << "ClapTrap "<< this->_Name << " has been destroyed\n" << RESET;
}


/*  ================*= Operator overload: =*================= */

ClapTrap & ClapTrap::operator=( ClapTrap const & source)
{   
    if(this != &source)
    {
    	this->_Name = source._getName();
		this->_HitPoints = source._getHitPoints();
		this->_EnergyPoints = source._getEnergyPoints();
		this->_AttackDamage = source._getAttackDamage();
    }
    return (*this);
}


/*  ================*= Getters: =*================= */

std::string ClapTrap::_getName() const
{
    return  this->_Name;
}

unsigned int ClapTrap::_getHitPoints() const
{
    return  this->_HitPoints;
}

unsigned int ClapTrap::_getEnergyPoints() const
{
    return  this->_EnergyPoints;
}

unsigned int ClapTrap::_getAttackDamage() const
{
    return  this->_AttackDamage;
}


/*  ================*= Public functions: =*================= */

void ClapTrap::attack(const std::string & target)
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {   
        if( target == this->_Name)
            std::cout << YELLOW << "ClapTrap " << this->_Name << " attacks itself causing " << _AttackDamage << " points of damage \n" << RESET;
        else
            std::cout << YELLOW << "ClapTrap " << this->_Name << " attacks " << target << " causing " << _AttackDamage << " points of damage \n" << RESET;
        this->_EnergyPoints--;        
    }
    else if (this->_HitPoints < 1)
    {
        std::cout << YELLOW << "ClapTrap " << this->_Name << " cant't attack because it's dead and it's has no hit points \n" << RESET;
    }
    else if (this->_EnergyPoints < 1)
    {
        std::cout << YELLOW << "ClapTrap " << this->_Name << " cant't attack because it's battery discharged and it's has no energy points \n" << RESET;
    }        
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ( this->_HitPoints > 0 && (this->_HitPoints <= amount ))
    {
        std::cout << RED << "ClapTrap " << this->_Name << " gets " << amount << " points of damage and it's dead\n" << RESET;
        this->_HitPoints = 0;
    }
    else if ( this->_HitPoints > 0 && this->_HitPoints > amount )
    {
        std::cout << RED << "ClapTrap " << this->_Name << " gets " << amount << " points of damage\n" << RESET;
        this->_HitPoints = this->_HitPoints - amount;  
    }
    else if ( this->_HitPoints <= 0 )
    {
        std::cout << RED << "ClapTrap " << this->_Name << " is already dead\n" << RESET;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        if( this->_HitPoints + amount > 10 )
        {
            std::cout << GREEN << "ClapTrap " << this->_Name << " repaired itself to 10 points\n" << RESET;
            this->_HitPoints = 10;
        }
        else
        {
            std::cout << GREEN << "ClapTrap " << this->_Name << " repaired itself to " << amount << " points\n" << RESET;
            this->_HitPoints = this->_HitPoints + amount;
        }
        this->_EnergyPoints--;
    }
    else if (this->_HitPoints < 1)
    {
        std::cout << GREEN << "ClapTrap " << this->_Name << " cant't repair itself because it's dead and it's has no hit points\n" << RESET;
    }
    else if (this->_EnergyPoints < 1)
    {
        std::cout << GREEN << "ClapTrap " << this->_Name << " cant't repair itself because it's battery discharged and it's has no energy points\n" << RESET;
    }
}