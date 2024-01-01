/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:42 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/30 12:41:10 by aputiev          ###   ########.fr       */
/*                                                                            */ 
/* ************************************************************************** */
 
#ifndef BRAIN_HPP
# define BRAIN_HPP
 
#include <string>

class Brain{
	
	private:		
		std::string ideas[100];
		
    public:
		Brain();
		Brain(Brain const & source);
		~Brain();
		Brain & operator=(Brain const & source);

		void setIdea(std::string const & newIdea, int num);
		std::string const & getIdea(int num) const;	
};

#endif
