/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:04:03 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/20 15:04:05 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"
#define RED     "\033[31m"

/*  ===============*= Constructor & Destructor: =*================= */
/* Constructor */
PhoneBook::PhoneBook() : _flagEnd(false), _contactIndex(-1) 
{
    return ;
}
    /* Destructor */
PhoneBook::~PhoneBook() 
{
    return ;
}

/*  ===================*= PRIVATE FUNCTIONS: =*===================== */

/* Reads line from std input */
std::string	PhoneBook::_readLine(std::string message)
{
	std::string new_line;

	std::cout << message << std::endl;
	if(!std::getline(std::cin, new_line))
	{
		_flagEnd = true;
		return "";
	}		
	new_line = trimSpaces(new_line);
	return new_line;
}

/* Shows contact of choosen number */
	bool	PhoneBook::_showContact(std::string index)
	{
		int index_value;
		
		if(index.empty() == true)
       		return false;
		else if(std::isdigit(index[0]) == false || index.length() != 1)
		{
			std::cout << RED << "Error. Invalid index, please enter index from 0 to 8" << RESET << std::endl;
			return false;
		}
		index_value = std::stoi(index);
		if(index_value < 0 || index_value > 7)
		{
			std::cout << RED << "Error. Invalid index, please enter index from 0 to 8"  << RESET << std::endl;
			return false;
		}
		if (this->_contactList[index_value].printContactInfo() == true)
			return true;
		else
			{
				std::cout << BLUE << "Contact doesn't exist" << RESET << std::endl;
				return false;
			}
	}


/* Prints full information of each contact */
void	PhoneBook::_printEachContact(int i)
{

	std::string first_name = this->_contactList[i].getFirstName();
	std::string last_name = this->_contactList[i].getLastName();
	std::string nickname = this->_contactList[i].getNickName();

	if(first_name.length() > 10)
	{
		first_name.resize(9);
		first_name += ".";
	}

	if(last_name.length() > 10)
	{
		last_name.resize(9);
		last_name += ".";
	}

	if(nickname.length() > 10)
	{
		nickname.resize(9);
		nickname += ".";
	}

	std::cout << "|" << std::setw(10) << i;

	std::cout << "|" << std::setw(10) << first_name;
	std::cout << "|" << std::setw(10) << last_name;
	std::cout << "|" << std::setw(10) << nickname << "|" << std::endl;

	
}

/*  ===================*= PUBLIC FUNCTIONS: =*===================== */


/* trims whitespaces and tabs in the beginning and the end */
std::string	PhoneBook::trimSpaces(std::string new_line) 
{
    std::string trim_symbols = " \t\n";
	std::string trimmed_string;
	size_t start;
	size_t end;

	start = new_line.find_first_not_of(trim_symbols);
	end = new_line.find_last_not_of(trim_symbols);
	if (start == end)
	{
		//std::cout << "new_line" << std::endl << new_line << std::endl;
		return new_line;
	}
	else	
	{
		trimmed_string = new_line.substr(start, end-start+1);
		//std::cout << "trimmed_string" << std::endl << trimmed_string << std::endl;
		return trimmed_string;
	}
}


/* adds new contact */
bool    PhoneBook::addContact()
{
	std::string	input_line;

	_contactIndex++;
	if(_contactIndex > 7)
		_contactIndex = 0;
	
	while(_flagEnd == false)
	{
		input_line = _readLine("1.Please enter first name");
		if(_flagEnd == true || (this->_contactList[_contactIndex].setFirstName(input_line) == true))
			break;
	}
	while(_flagEnd == false)
	{
		input_line = _readLine("2.Please enter last name");
		if(_flagEnd == true || (this->_contactList[_contactIndex].setLastName(input_line) == true))
			break;
	}
	while(_flagEnd == false)
	{
		input_line = _readLine("3.Please enter nickname");
		if(_flagEnd == true || (this->_contactList[_contactIndex].setNickName(input_line) == true))
			break;
	}
	while(_flagEnd == false)
	{
		input_line = _readLine("4.Please enter phone number");
		if(_flagEnd == true || (this->_contactList[_contactIndex].setPhoneNumber(input_line) == true))
			break;
	}
	while(_flagEnd == false)
	{
		input_line = _readLine("5.Please enter darkest secret");
		if(_flagEnd == true || (this->_contactList[_contactIndex].setSecret(input_line) == true))
			break;
	}
	if(_flagEnd == true)
	{
		_flagEnd = false;
		return false;
	}
	std::cout << BLUE << "Contact has been saved" << RESET <<std::endl;
	return true;
}


	/* Displays list of contacts */
bool    PhoneBook::searchContact(void)
{
	std::string	input_line;

	if(_contactIndex == -1)
	{
		std::cout << std::endl << "The PhoneBook is empty" << std::endl << std::endl;
		return true;
	}
	std::cout	<< "*-------------------------------------------*" << std::endl
				<< "|   Index  |First name| Last name| Nickname |" << std::endl
				<< "*-------------------------------------------*" << std::endl;
	for(int i = 0; i < 8; i++)
		_printEachContact(i);
	std::cout	<< "*-------------------------------------------*" << std::endl;
	
	while (true)
	{
		input_line = _readLine("Please, enter number of contact:");
		if (input_line.empty() == true)
			return false;
		else if(this->_showContact(input_line) == true)
		{
			break;
		}
	}
		return true;
}
