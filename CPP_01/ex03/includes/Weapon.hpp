/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:57:07 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/25 14:55:02 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string const weapon);
		~Weapon();
		
		const std::string &getType() const;
		void setType(std::string const new_type);
    
};

#endif
