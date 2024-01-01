/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:30 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/30 15:31:21 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Brain.hpp"
#include "includes/Colors.hpp"
#include <string> 
#include <iostream> 


/*  ================*= Constructors =*================= */

Dog::Dog() : Animal()
{
    std::cout << CYAN << "Dog default constructor called\n" << RESET;
    this->dogBrainPtr = new Brain;
    this->type = "Dog";
}

Dog::Dog(Dog const & source) : Animal()
{
    std::cout << CYAN << "Dog copy constructor called\n" << RESET;
    this->dogBrainPtr = NULL;
    *this = source;  
}
 
/*  ================*=  Destructor: =*================= */

Dog::~Dog()
{
    std::cout << RED<< "Dog destructor called\n" << RESET;
    delete this->dogBrainPtr;
}

/*  ================*=  Overload "=" operator: =*================= */

Dog & Dog::operator=( Dog const & source)
{   
    std::cout << CYAN << "Dog \"=\"overload operator called\n" << RESET;
    if(this != &source)
    {
        this->type = source.type;
        if(this->dogBrainPtr != NULL)
            delete this->dogBrainPtr;
                
        this->dogBrainPtr = new Brain(*source.dogBrainPtr);        
    }
    return *this;
}

void Dog::makeSound() const
{        
    std::cout << PURPLE << this->type << ": Woof, woof!\n" << RESET;
}

Brain* Dog::getBrain() const
{
    return this->dogBrainPtr;
}