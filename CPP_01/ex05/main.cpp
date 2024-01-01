/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:46:50 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/18 13:13:14 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ( void )
{
    Harl Complainer;

    Complainer.complain("DEBUG");
    Complainer.complain("INFO");
    Complainer.complain("WARNING");
    Complainer.complain("ERROR");
    //Complainer.complain("SOME NONSENCE FOR TEST");
    
    return 0;
}