/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:56:41 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/20 13:21:42 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "Account.hpp"


int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*  ===================*= PRIVATE FUNCTIONS: =*===================== */
void	Account::_displayTimestamp( void )
{
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);

    std::ostringstream formattedTime;
    formattedTime << std::put_time(localTime, "%Y%m%d_%H%M%S");
    std::cout << "[" << formattedTime.str() << "] ";
}

/*  ===============*= Constructor & Destructor: =*================= */

/* Default Constructor */
Account::Account( void )
{

    std::cout << "default copnstructor:" << std::endl;
    return;
}

/* Constructor */
Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    initial_deposit = 0;
    
    _displayTimestamp();
   
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount = _totalAmount + _amount;
    std::cout   << "index:" << this->_accountIndex << ";" << "amount:"
                << _amount << ";created" << std::endl;

    return;
}

/* Destructor */
Account::~Account( void )
{
    _displayTimestamp();    
    std::cout   << "index:" << _accountIndex << ";" << "amount:"
                << _amount << ";closed" << std::endl;
    return;
}

/*  ========================*= GETTERS: =*========================== */

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}


/*  ===================*= PUBLIC FUNCTIONS: =*===================== */

void	Account::displayAccountsInfos( void )
{   
    _displayTimestamp();	
    std::cout   << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
                << ";deposits:" << _totalNbDeposits << ";withdrawals:" << getNbWithdrawals()
                << std::endl;    
    return;
}


void	Account::displayStatus( void ) const
{    
    _displayTimestamp();
    std::cout	<< "index:" << this->_accountIndex << ";" << "amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
				<< std::endl;    
    return;
}


void	Account::makeDeposit( int deposit )
{   	
    _displayTimestamp();
    int p_amount = _amount;
    _amount = _amount + deposit;
    _totalAmount = _totalAmount + deposit;
    this->_nbDeposits++;

    std::cout	<< "index:" << this->_accountIndex << ";" << "p_amount:" << p_amount
                << ";deposit:" << deposit << ";amount:" << _amount
                << ";nb_deposits:" << _nbDeposits << std::endl;

    _totalNbDeposits++;
    return;	
}



bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    int p_amount = _amount;    

    if(withdrawal > p_amount)
    {
        std::cout	<< "index:" << this->_accountIndex << ";" << "p_amount:" << p_amount
			        << ";withdrawal:refused" << std::endl; 
        return false;
    }
    else
    {
        _amount = p_amount - withdrawal;
        _nbWithdrawals++;
        std::cout	<< "index:" << this->_accountIndex << ";" << "p_amount:" << p_amount
			<< ";withdrawal:" << withdrawal << ";amount:" << _amount 
            << ";nb_withdrawals:" << _nbWithdrawals << std::endl; 
        
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        return false;        
    }    
}
