/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:46:50 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/18 12:43:24 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main (int ac, char **av)
{
    Harl Complainer;
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments. Please enter only 1 argument" << std::endl;
        return 1;
    }    
    Complainer.complain(av[1]);        
    return 0;
}