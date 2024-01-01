/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:30 by aputiev           #+#    #+#             */
/*   Updated: 2023/11/01 14:20:25 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"


/*  ================*= Constructors =*================= */

Dog::Dog() : Animal()
{
    std::cout << CYAN << "Dog default constructor called\n" << RESET;
    this->type = "Dog";
}

Dog::Dog(Dog const & source) : Animal()
{
    std::cout << CYAN << "Dog copy constructor called\n" << RESET;
    *this = source;
}

/*  ================*=  Destructor: =*================= */

Dog::~Dog()
{
    std::cout << RED<< "Dog destructor called\n" << RESET;
}

/*  ================*=  Overload "=" operator: =*================= */

Dog & Dog::operator=( Dog const & source)
{
    std::cout << YELLOW << "Dog \"=\" operator called\n" << RESET;
    if(this != &source)
    {
        this->type = source.type;
    }
    return *this;
}

void Dog::makeSound() const
{        
    std::cout << PURPLE << this->type << ": Woof, woof!\n" << RESET;
}
