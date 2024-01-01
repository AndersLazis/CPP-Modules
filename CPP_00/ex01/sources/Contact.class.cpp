/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:19:11 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/20 13:49:09 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

/*  ===============*= Constructor & Destructor: =*================= */
/* Constructor */
Contact::Contact() : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("") 
{
    return ;
}

/* Destructor */
Contact::~Contact() 
{
    return ;
}

/*  ========================*= SETTERS: =*========================== */

/* Sets firstname in a contact class. Returns true if the firstname was successfully set, false if not. */
bool Contact::setFirstName(std::string name)
{
    if(name.empty() == true)
        return false;
    else if (_checkStringIsAZ(name) == false)
    {
        std::cout << "Error. First name must contain letters only" << std::endl;
        return false;
    }

    this->_firstName = name;
    return (true);
}

/* Sets lastname in a contact class. Returns true if the lastname was successfully set, false if not. */
bool Contact::setLastName(std::string name)
{
    if(name.empty() == true)
        return false;
    else if (_checkStringIsAZ(name) == false)
    {
        std::cout << "Error. Last name must contain letters only" << std::endl;
        return false;
    }

    this->_lastName = name;
    return (true);
}

/* Sets nickname in a contact class. Returns true if the nickname was successfully set, false if not. */
bool Contact::setNickName(std::string name)
{
    if(name.empty() == true)
        return false;
    else if (_checkStringIsAZ(name) == false)
    {
        std::cout << "Error. Nickname must contain letters only" << std::endl;
        return false;
    }

    this->_nickName = name;
    return (true);
}

/* Sets phone number in a contact class. Returns true if the number was successfully set, false if not. */
bool Contact::setPhoneNumber(std::string number)
{
    if(number.empty() == true)
        return false;
    else if (_checkStringIs09(number) == false)
    {
        std::cout << "Error. Phone number must contain only digits or \"+\"" << std::endl;
        return false;
    }

    this->_phoneNumber = number;
    return (true);
}

/* Sets secret in a contact class. Returns true if the secret was successfully set, false if not. */
bool Contact::setSecret(std::string secret)
{
    if(secret.empty() == true)
        return false;
    this->_darkestSecret = secret;
    return (true);
}


/*  ========================*= GETTERS: =*========================== */

std::string const Contact::getFirstName() const
{
    return (this->_firstName);
}

std::string const Contact::getLastName() const
{
    return (this->_lastName);
}

std::string const Contact::getNickName() const
{
    return (this->_nickName);
}

std::string const Contact::getNumber() const
{
    return (this->_phoneNumber);
}

std::string const Contact::getSecret() const
{
    return (this->_darkestSecret);
}

/*  ===================*= PRIVATE FUNCTIONS: =*===================== */

bool Contact::_checkStringIsAZ(std::string str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {   
        if(std::isalpha(*it) == false && *it != ' ' && *it != '-')
            return false;
    }
    return true;
}

bool Contact::_checkStringIs09(std::string str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {   
        if(std::isdigit(*it) == false && *it != ' ' && *it != '+')
            return false;
    }
    return true;
}

bool Contact::_isEmpty() const
{
    if(this->_firstName.empty())
        return true;
	return false;
}

/*  ===================*= PUBLIC FUNCTIONS: =*===================== */

bool Contact::printContactInfo() const
{
    if (this->_isEmpty())
        return false;
std::cout	<< BLUE << "*-------------------------------------------*" << RESET << std::endl
			<< GREEN << "First name:\t " << RESET  << this->getFirstName() << std::endl
			<< GREEN <<  "Last name:\t " << RESET  << this->getLastName() << std::endl
			<< GREEN << "Nickname:\t "  << RESET << this->getNickName() << std::endl
			<< GREEN <<  "Phone number:\t " << RESET << this->getNumber() << std::endl
			<< GREEN << "Darkest secret:\t " << RESET << this->getSecret() << std::endl
			<< BLUE << "*-------------------------------------------*" << RESET << std::endl;
    return true;
}

