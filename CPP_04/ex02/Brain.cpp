/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:22 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/30 15:19:41 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Colors.hpp"
#include "includes/Brain.hpp"
 
/*  ================*= Constructors =*================= */

Brain::Brain()
{
    std::cout << BLUE << "Brain default constructor called\n" << RESET;
}

Brain::Brain(const Brain & source) 
{
    std::cout << BLUE << "Brain copy constructor called\n" << RESET;
    *this = source;
}

/*  ================*=  Destructor: =*================= */

Brain::~Brain()
{
    std::cout << RED << "Brain destructor called\n" << RESET;
}

/*  ================*=  Overload "=" operator: =*================= */

Brain & Brain::operator=(Brain const & source)
{   
    //std::cout << "This Brain adress\n" <<  this << std::endl << RESET;
    //std::cout << "SRC Brain adress\n" << &source << std::endl << RESET;
    
    std::cout << BLUE << "Brain assignmebt overload operator called\n" << RESET;    
    if(this != &source)
    {
        for( int i = 0; i < 100; i++) 
        {   
            this->ideas[i] = source.ideas[i];
        }        
    }
    return *this;
}

void Brain::setIdea(std::string const & newIdea, int num)
{
    this->ideas[num] = newIdea;
}

std::string const & Brain::getIdea(int num) const
{
    return this->ideas[num];
}

