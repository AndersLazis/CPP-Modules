/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:30 by aputiev           #+#    #+#             */
/*   Updated: 2023/11/01 14:19:58 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"


/*  ================*= Constructors =*================= */

Cat::Cat() : Animal()
{
    std::cout << CYAN << "Cat default constructor called\n" << RESET;
    this->type = "Cat";
}

Cat::Cat(Cat const & source) : Animal()
{
    std::cout << CYAN << "Cat copy constructor called\n" << RESET;
    *this = source;
}

/*  ================*=  Destructor: =*================= */

Cat::~Cat()
{
    std::cout << RED<< "Cat destructor called\n" << RESET;
}

/*  ================*=  Overload "=" operator: =*================= */

Cat & Cat::operator=( Cat const & source)
{
    std::cout << YELLOW << "Cat \"=\" operator called\n" << RESET;
    if(this != &source)
    {
        this->type = source.type;
    }
    return *this;
}

void Cat::makeSound() const
{        
    std::cout << PURPLE << this->type << ": Meow, meow!\n" << RESET;
}
