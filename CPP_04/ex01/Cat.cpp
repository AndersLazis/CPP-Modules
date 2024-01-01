/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:30 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/30 15:58:50 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"
#include "includes/Brain.hpp"
#include "includes/Colors.hpp"
#include <string> 
#include <iostream> 


/*  ================*= Constructors =*================= */

Cat::Cat() : Animal()
{
    std::cout << CYAN << "Cat default constructor called\n" << RESET;
    this->catBrainPtr = new Brain;
    this->type = "Cat";
}

Cat::Cat(Cat const & source) : Animal()
{
    std::cout << CYAN << "Cat copy constructor called\n" << RESET;
    this->catBrainPtr = NULL;
    *this = source;  
}
 
/*  ================*=  Destructor: =*================= */

Cat::~Cat()
{
    std::cout << RED<< "Cat destructor called\n" << RESET;
    delete this->catBrainPtr;
}

/*  ================*=  Overload "=" operator: =*================= */

Cat & Cat::operator=(Cat const & source)
{   
    std::cout << CYAN << "Cat \"=\"overload operator called\n" << RESET;
    if(this != &source)
    {
        this->type = source.type;
        if(this->catBrainPtr != NULL)
            delete this->catBrainPtr;
                
        this->catBrainPtr = new Brain(*source.catBrainPtr);        
    }
    return *this;
}

void Cat::makeSound() const
{        
    std::cout << PURPLE << this->type << ": Meow, meow!\n" << RESET;
}

Brain* Cat::getBrain() const
{
    return this->catBrainPtr;
}