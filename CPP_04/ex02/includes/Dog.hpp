/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:21 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/31 16:45:44 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	
	private:
		Brain* dogBrainPtr;
		
    public:
		Dog();
		Dog(Dog const & source);
		~Dog();
		Dog & operator=(Dog const & source);
		
        void makeSound() const;
		Brain* getBrain() const;		
};
 
#endif
