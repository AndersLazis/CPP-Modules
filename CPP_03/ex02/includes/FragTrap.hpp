/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:29:21 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/26 19:44:08 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 

#include <iostream>
#include <string>
#include "Colors.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

    public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap & source);
		~FragTrap();
		FragTrap & operator=( FragTrap const & source);
        
		void highFivesGuys(void);
		void attack(const std::string & target);
};

#endif
