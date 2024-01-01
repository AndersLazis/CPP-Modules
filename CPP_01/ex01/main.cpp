/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:30:39 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/15 19:18:10 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );


bool checkStringIsAZ(std::string str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {   
        if(std::isalpha(*it) == false)
            return false;
    }
    return true;
}

bool checkStringIs09(std::string str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {   
        if(std::isdigit(*it) == false)
            return false;
    }
    return true;
}

int getNbZombies()
{
	int N;
	std::string input_line;
	bool fl_continue = true;
	
	while(1)
	{
		std::cout	<< BLUE << "Please enter how many zombies will be in horde:" << RESET << std::endl;
		std::getline(std::cin, input_line);
		fl_continue = true;
		try{
			N = std::stoi(input_line);
		} catch (const std::out_of_range& e) {
			std::cout	<< RED << "Error: invalid number. Please enter a number between 0 and INT_MAX" << RESET << std::endl;
			fl_continue = false;
			//return -1;
		} catch (const std::invalid_argument& e) {
			std::cout	<< RED << "Error: invalid number. Please enter a number between 0 and INT_MAX" << RESET << std::endl;
			fl_continue = false;
			//return -1;
		}
		if(fl_continue == true && (N < 1 || N > INT_MAX) )
		 	std::cout	<< RED << "Error: invalid number. Please enter a number between 0 and INT_MAX" << RESET << std::endl;
		else if(fl_continue ==true)
			break;
		
	}
	return N;	
}

std::string getHordeName()
{
	std::string input_line;
	while(1)
	{
		std::cout << BLUE << "Please enter horde name:" << RESET << std::endl;
		std::getline(std::cin, input_line);
		if((input_line.empty() == true ) || (checkStringIsAZ(input_line) == false))
			std::cout << RED << "Error: invalid name. Please enter only letters" << RESET << std::endl << std::endl;
		else 
			break;
	}
	return input_line;	
}


int main()
{
	int N;
	std::string hordeName;

	std::cout << std::endl << BLUE << "         [̲̅Z̲̅][̲̅o̲̅][̲̅m̲̅][̲̅b̲̅][̲̅i̲̅][̲̅e̲̅][̲̅ ̲̅][̲̅H̲̅][̲̅o̲̅][̲̅r̲̅][̲̅d̲̅][̲̅e̲̅]" << RESET <<std::endl <<std::endl;
		
	N = getNbZombies();
	// if (N == -1)
	// 	return 1;
	hordeName = getHordeName();			
	Zombie* Horde = zombieHorde(N, hordeName);
	if(Horde == nullptr)
		return 1;
	delete []Horde;
	return 0;
}