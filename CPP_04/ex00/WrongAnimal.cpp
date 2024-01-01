/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:14 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/29 12:27:15 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "includes/Colors.hpp"
#include "includes/WrongAnimal.hpp"

/*  ================*= Constructors =*================= */

WrongAnimal::WrongAnimal() : type("Wrong SpongeBob")
{
    std::cout << BLUE << "WrongAnimal default constructor called\n" << RESET;
}

WrongAnimal::WrongAnimal(std::string & userDefinedType) : type(userDefinedType)
{
    std::cout << BLUE << "WrongAnimal constructor called\n" << RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal & source) 
{
    std::cout << BLUE << "WrongAnimal copy constructor called\n" << RESET;
    *this = source;
}


/*  ================*=  Destructor: =*================= */

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal destructor called\n" << RESET;
}

/*  ================*=  Overload "=" operator: =*================= */

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & source)
{
    if(this != &source)
    {
        this->type = source.type;
    }
    return *this;
}




/*  ================*=  Public Functions: =*================= */

std::string const WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{    
    std::cout << PURPLE << this->type << " says: I am Wrong Sponge Bob!\n" << RESET;
}