/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:42 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/31 16:38:23 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP
 
#include <string>

class AAnimal{
	
	protected:		
		std::string type;
		
    public:
		AAnimal();
		AAnimal(std::string const & userDefinedType);
		AAnimal(AAnimal const & source);
		virtual ~AAnimal();
		AAnimal & operator=( AAnimal const & source);

        virtual void makeSound() const = 0;
        std::string const getType() const;	
};

#endif
