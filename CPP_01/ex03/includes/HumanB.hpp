/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:06:29 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/16 14:27:36 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class HumanB
{
private:
    std::string const _Name;
    Weapon *_WeaponPtr;
    
public:
    HumanB(std::string const name); 
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon &givenWeaponPtr);
};

#endif