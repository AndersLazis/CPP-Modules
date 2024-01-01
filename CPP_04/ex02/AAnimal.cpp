/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:22 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/31 16:37:32 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Colors.hpp"
#include "includes/AAnimal.hpp"

/*  ================*= Constructors =*================= */

AAnimal::AAnimal() : type("SpongeBob")
{
    std::cout << BLUE << "AAnimal default constructor called\n" << RESET;
}

AAnimal::AAnimal(std::string const & userDefinedType) : type(userDefinedType)
{
    std::cout << BLUE << "AAnimal constructor called\n" << RESET;
}

AAnimal::AAnimal(const AAnimal & source)
{
    std::cout << BLUE << "AAnimal copy constructor called\n" << RESET;
    *this = source;
}

/*  ================*=  Destructor: =*================= */

AAnimal::~AAnimal()
{
    std::cout << RED << "AAnimal destructor called\n" << RESET;
}

/*  ================*=  Overload "=" operator: =*================= */

AAnimal & AAnimal::operator=(AAnimal const & source)
{
    if(this != &source)
    {
        this->type = source.type;
    }
    return *this;
}


/*  ================*=  Public Functions: =*================= */

std::string const AAnimal::getType() const
{
    return this->type;
}

void AAnimal::makeSound() const
{    
    std::cout << PURPLE << this->type << " says: I am Sponge Bob! Are you ready kids?\n" << RESET;
}