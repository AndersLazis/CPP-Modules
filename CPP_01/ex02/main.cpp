/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:28:09 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/15 20:11:20 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

int main()
{
    std::string string = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << GREEN << "The memory address of the string variable:" << RESET << std::endl;
    std::cout << &string << std::endl;
    std::cout << RED << "The memory address held by stringPTR:" << RESET << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << BLUE << "The memory address held by stringREF:" << RESET << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << GREEN << "The value of the string variable:" << RESET << std::endl;
    std::cout << string << std::endl;
    std::cout << RED << "The value pointed to by stringPTR:" << RESET << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << BLUE << "The value pointed to by stringREF:" << RESET << std::endl;
    std::cout << stringREF << std::endl;
    
}