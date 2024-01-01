/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:19:03 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/17 15:24:37 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"



/* Read line function */
std::string ft_read_line (PhoneBook	*my_book)
{
	std::string new_line;

	if(!std::getline(std::cin, new_line))
		return("EXIT");
	new_line = my_book->trimSpaces(new_line);	
	return new_line;
}

int main()
{
    PhoneBook my_book;
    std::string input_line;

	std::cout << std::endl << GREEN << "         [̲̅C̲̅][̲̅P̲̅][̲̅P̲̅][̲̅ ̲̅][̲̅M̲̅][̲̅O̲̅][̲̅D̲̅][̲̅U̲̅][̲̅L̲̅][̲̅E̲̅][̲̅ ̲̅][̲̅0̲̅][̲̅0̲̅]" << RESET <<std::endl <<std::endl;
    std::cout << GREEN << "===========*========== PHONEBOOK ===========*===========" << RESET <<std::endl;

    while (1)
    {
        std::cout	<< " * Type \"ADD\" to save a new contact" << std::endl
					<< " * Type \"SEARCH\" to display a specific contact" << std::endl
					<< " * Type \"EXIT\" to quit the program" << std::endl
					<< GREEN << "============================*===========================" << RESET <<std::endl;
		input_line = ft_read_line(&my_book);

		if(input_line == "ADD")
		{
			if(my_book.addContact() == false)
				break;
		}
		else if(input_line == "SEARCH")
		 	my_book.searchContact();
		else if (input_line == "EXIT")
			break;
		else
			std::cout << RED << "Invalid input" << RESET << std::endl;		
    }    
    return 0;
}
