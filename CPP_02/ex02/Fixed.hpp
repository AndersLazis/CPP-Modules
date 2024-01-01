/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:48:49 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/22 21:03:42 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
    public:
        Fixed( void );
        Fixed( const int number );
		Fixed( const float number );
        Fixed( Fixed const & source);
        ~Fixed ( void );

        Fixed & operator=( Fixed const & source );
        
        //The 6 comparison operators:
        bool operator<( const Fixed& another )const;
        bool operator>( const Fixed& another )const;
        bool operator<=( const Fixed& another )const;
        bool operator>=( const Fixed& another )const;
        bool operator==( const Fixed& another )const;
        bool operator!=( const Fixed& another )const;
        
        //The 4 arithmetic operators:
        Fixed operator+( const Fixed& another )const;
        Fixed operator-( const Fixed& another )const;
        Fixed operator*( const Fixed& another )const;
        Fixed operator/( const Fixed& another )const;
    
        //The 4 increment/decrement operators:
        Fixed & operator++();   //prefix
        Fixed   operator++( int value );   //postfix
        Fixed & operator--();   //prefix
        Fixed   operator--( int value );	//postfix
        
        static  Fixed & min( Fixed & one, Fixed & two);
        static  Fixed & max( Fixed & one, Fixed & two);
        static  Fixed const & min( Fixed const & one, Fixed const & two);
        static  Fixed const & max( Fixed const & one, Fixed const & two);

        
        int		getRawBits( void ) const;
        void	setRawBits( int const raw );
        float	toFloat( void ) const;
		int		toInt( void ) const;

        

    private:
        int 				_raw;
        static const int	_fract_bits = 8;           
};

#endif

std::ostream& operator<<( std::ostream& output_stream, const Fixed& number );
