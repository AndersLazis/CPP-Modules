/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:42 by aputiev           #+#    #+#             */
/*   Updated: 2023/11/01 14:47:19 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
 
#include <string>

class Animal{
	
	protected:		
		std::string type;
		
    public:
		Animal();
		Animal(std::string const & userDefinedType);
		Animal(Animal const & source);
		virtual ~Animal();
		Animal & operator=( Animal const & source);

        virtual void makeSound() const;
        std::string const getType() const;	
};

#endif
