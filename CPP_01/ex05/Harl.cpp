/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:46:44 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/18 13:02:09 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

//	*========= Constructor & Destructor =========*
    
    Harl::Harl( void )
    {
        return ;
    }
    
	Harl::~Harl( void )
    {
        return ;
    }
    
//	*========= Private Functions =========*
    
    void Harl::_debug( void )
    {
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
    }
    
    void Harl::_info( void )
    {
        std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }
    
    void Harl::_warning( void )
    {
       std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }
    void Harl::_error( void )
    {
        std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
    }

//	*========= Public Functions =========*

	void    Harl::complain( std::string level )
    {   
        typedef void (Harl::*FunctionPtr)();
        
        std::string types_of_complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};   

        FunctionPtr FunctionArray[4] = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

        for (int i = 0; i < 4; i++)
        {
            if(level == types_of_complaints[i])
            {
                (this->*FunctionArray[i])();
                return ;
            }     
        }
        std::cout <<  "You entered some nonsence, please enter DEBUG or INFO or WARNING or ERROR" << std::endl;   
        return ;
    }

