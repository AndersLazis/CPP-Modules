/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:46:47 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/18 11:18:45 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>

class Harl
{    
    private:
    
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );

    public:
	
	Harl( void );
	~Harl( void );
	void    complain( std::string level );   
};

#endif