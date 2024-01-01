/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:30 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/29 10:39:51 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongCat.hpp"


/*  ================*= Constructors =*================= */

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << CYAN << "WrongCat default constructor called\n" << RESET;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & source) : WrongAnimal()
{
    std::cout << CYAN << "WrongCat copy constructor called\n" << RESET;
    *this = source;
}

/*  ================*=  Destructor: =*================= */

WrongCat::~WrongCat()
{
    std::cout << RED<< "WrongCat destructor called\n" << RESET;
}

/*  ================*=  Overload "=" operator: =*================= */

WrongCat & WrongCat::operator=( WrongCat const & source)
{
    std::cout << YELLOW << "Wrong cat \"=\" operator called\n" << RESET;
    if(this != &source)
    {
        this->type = source.type;
    }
    return *this;
}

void WrongCat::makeSound() const
{        
    std::cout << PURPLE << this->type << ": Wrong Meow, meow!\n" << RESET;
}
