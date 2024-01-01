/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:48:49 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/23 11:00:20 by aputiev          ###   ########.fr       */
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
        
        int		getRawBits( void ) const;
        void	setRawBits( int const raw );
        float	toFloat( void ) const;
		int		toInt( void ) const;

    private:
        int 				_raw;
        static const int	_fract_bits = 8;          
};

std::ostream& operator<<( std::ostream& output_stream, const Fixed& number );

#endif