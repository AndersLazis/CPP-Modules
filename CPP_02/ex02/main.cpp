/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:51:04 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/23 12:58:36 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    
Fixed 		a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << "max a, b " << Fixed::max( a, b ) << std::endl;

// optional tests:
Fixed 		k(3);
Fixed		m(3);
Fixed		n(2);

const Fixed		x(9);
const Fixed		y(2);
	// Operators "<" and ">" overload:
	
	std::cout << "a < k: " << std::boolalpha << ( k < a ) << std::endl;
	std::cout << "a > k: " << std::boolalpha << ( k > a ) << std::endl;

	// Operators "<=" and ">=" overload:
	
	std::cout << "k >= m: " << std::boolalpha << ( k >= a ) << std::endl;
	std::cout << "a <= m: " << std::boolalpha << ( a <= m ) << std::endl;

	// Operators "==" and "!=" overload:
	
	std::cout << "m == k: " << std::boolalpha << ( m == k ) << std::endl;
	std::cout << "m != n: " << std::boolalpha << ( m != n ) << std::endl;
	
	// Operator "+" overload:
	std::cout << "a + m: " << ( a + m ) << std::endl;

	// Operator "-" overload:
	std::cout << "a - m: " << ( a - m ) << std::endl;

	// Operator "*" overload:
	std::cout << "a * m: " << ( a * m ) << std::endl;

	// Operator "/" overload:
	std::cout << "a / m: " << ( a / m ) << std::endl;

	// Operator "++a" overload:
	std::cout << "++a " << ++a << std::endl;

	// Operator "a++" overload:
	std::cout << "a++ " << a++ << std::endl;

	// static member function min:
	std::cout << "min m, n " << Fixed::min( m, n ) << std::endl;

	// static member function max:
	std::cout << "max n, n " << Fixed::max( m, n ) << std::endl;

	// static member function max const :
	std::cout << "const max x, y " << Fixed::max( x, y ) << std::endl;

	// static member function min const :
	std::cout << "const min x, y " << Fixed::min( x, y ) << std::endl;

	

return 0;
}
