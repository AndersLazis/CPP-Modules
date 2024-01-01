/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:35:36 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/20 13:47:07 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) 
{
	int j = 0;
	char uppercase;

	if(ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
	}
	else
	{
		for(int i = 1; i < ac; i++)
		{	
			std::string str(av[i]);
			for(int j = 0; j < str.length(); j++)
			{
				if(std::isalpha(av[i][j]))
				{		
					uppercase = (char)std::toupper(av[i][j]);				
					std::cout << uppercase;
				}
				else
					std::cout << av[i][j];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
