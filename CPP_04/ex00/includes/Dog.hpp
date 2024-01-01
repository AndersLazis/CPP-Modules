/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:21 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/28 18:45:58 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	
    public:

		Dog();
		Dog( Dog const & source);
		~Dog();
		Dog & operator=( Dog const & source);
		
        void makeSound() const;
};

#endif
