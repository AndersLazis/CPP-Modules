/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:55:02 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/23 12:38:53 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Fixed.hpp"

// ANSI escape codes for text colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

/*  ================*= Constructors & Destructor: =*================= */

/*= DEFAULT Constructor =*/
Fixed::Fixed( void ) : _raw ( 0 )
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
} 

/*= INT Constructor =*/
Fixed::Fixed( const int number ) : _raw ( number << _fract_bits )
{
    std::cout << GREEN << "Int constructor called" << RESET << std::endl;
}

/*= FLOAT Constructor =*/
Fixed::Fixed( float const number ) : _raw ( roundf(number * (1 << _fract_bits )) )
{
    std::cout << GREEN << "Float constructor called" << RESET << std::endl;
}

/*= COPY Constructor =*/
Fixed::Fixed( Fixed const & source)
{   
    std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
    *this = source;
} 

/*= Destructor =*/
Fixed::~Fixed( void )
{
     std::cout << RED << "Destructor called" << RESET << std::endl;
}

/*  ================*= Operator overload: =*================= */

Fixed & Fixed::operator=( Fixed const & source )
{
    std::cout  << "Copy assignment operator called" << std::endl;
    if( this != &source )
        this->_raw = source.getRawBits();
    return (*this);
}

/*  ================*= Setter: =*================= */

void	Fixed::setRawBits( int const raw )
{
    std::cout  << CYAN << "setRawBits member function called" << RESET << std::endl;
    this->_raw = raw;
}

/*  ================*= Getter: =*================= */

int		Fixed::getRawBits( void ) const
{
    std::cout  << YELLOW << "getRawBits member function called" << RESET << std::endl;
    return this->_raw;
}


/*  ================*= Public functions: =*================= */
float Fixed::toFloat( void ) const
{
    return ( (float)this->_raw / (1 << _fract_bits) );    
}

int Fixed::toInt( void ) const
{
    return ( this->_raw >> Fixed::_fract_bits );    
}


/*  ================*= Operators overload functions: =*================= */
std::ostream& operator<<( std::ostream& output_stream, const Fixed& number )
{
    output_stream << number.toFloat();
    return output_stream;
}

bool Fixed::operator<( const Fixed& another )const
{
    if ( this->_raw < another.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>( const Fixed& another )const
{
    if ( this->_raw < another.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=( const Fixed& another )const
{
    if ( this->_raw <= another.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=( const Fixed& another )const
{
    if ( this->_raw >= another.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator==( const Fixed& another )const
{
    if ( this->_raw == another.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=( const Fixed& another )const
{
    if ( this->_raw != another.getRawBits())
		return true;
	else
		return false;
}

Fixed Fixed::operator+( const Fixed& another )const
{
	return (Fixed (this->toFloat() + another.toFloat()));	
}

Fixed Fixed::operator-( const Fixed& another )const
{
	return (Fixed (this->toFloat() - another.toFloat()));	
}

Fixed Fixed::operator*( const Fixed& another )const
{
	return (Fixed (this->toFloat() * another.toFloat()));	
}

Fixed Fixed::operator/( const Fixed& another )const
{
	return (Fixed (this->toFloat() / another.toFloat()));	
}

Fixed & Fixed::operator++()	//prefix
{
	++(this->_raw);
	return *this;
}

Fixed Fixed::operator++( int value )	//postfix
{
	Fixed temp(*this);
	(void)value;
	++(this->_raw);
	return temp;
}

Fixed & Fixed::operator--()	//prefix
{
	--(this->_raw);
	return *this;
}

Fixed Fixed::operator--( int value )	//postfix
{
	Fixed temp(*this);
	(void)value;
	--(this->_raw);
	return temp;
}

Fixed & Fixed::min( Fixed & one, Fixed & two)
{
	if ( one <= two)
		return one;
	else
		return two;
}

Fixed & Fixed::max( Fixed & one, Fixed & two)
{
	if ( one >= two)
		return one;
	else
		return two;
}

Fixed const & Fixed::min( Fixed const & one, Fixed const & two)
{
	if ( one <= two)
		return one;
	else
		return two;
}

Fixed const & Fixed::max( Fixed const & one, Fixed const & two)
{
	if ( one >= two)
		return one;
	else
		return two;
}