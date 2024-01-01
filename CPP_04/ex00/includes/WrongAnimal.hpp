/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:29 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/29 12:27:35 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
 
#include <string>
#include "Colors.hpp"
#include <string>
#include <iostream>

class WrongAnimal{
	
	protected:
		
		std::string type;
		
    public:

		WrongAnimal();
		WrongAnimal(std::string & userDefinedType);
		WrongAnimal(const WrongAnimal & source);
		virtual ~WrongAnimal();
		WrongAnimal & operator=( WrongAnimal const & source);

        void makeSound() const;
        std::string const getType() const;
		
	
};

#endif
