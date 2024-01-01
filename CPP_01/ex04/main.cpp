/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:33:36 by aputiev           #+#    #+#             */
/*   Updated: 2023/10/17 16:46:40 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

bool 	strings_are_valid(std::string s1, std::string s2)
{
    if (s1.empty())
    {
        std::cout << "Error. String s1 is empty." << std::endl;
        return false;
    }
    if (s2.empty())
    {
        std::cout << "Error. String s2 is empty." << std::endl;
        return false;
    }
    return true;
}

std::string ft_replace(std::string buffer, std::string s1, std::string s2)
{
    int pos = buffer.find(s1);
    while(pos != -1)
    {  
       buffer = buffer.erase(pos, s1.length());
       buffer = buffer.insert (pos, s2);
       pos = buffer.find(s1);
    }
    return buffer;
}

int main (int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Error. Please enter only 3 args." << std::endl;
        return 1;
    }
    std::ifstream fin;
	fin.open(av[1], std::fstream::in);
    if(!fin.is_open())
    {
        std::cout << "Error. Cannot open a file." << std::endl;
		return 1;
    }
    if (fin.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "Error. File is empty." << std::endl;
		return 1;
    }
	if(!strings_are_valid(av[2], av[3]))
		return 1;
    
    std::string buffer;
    std::string f_name = av[1];
    std::fstream fout((f_name + ".replace"), std::fstream::out);
    
    if(!fout.is_open())
    {
        std::cout << "Error. Cannot create output file." << std::endl;
		return 1;
    }
    while (!fin.eof())
    {
        getline(fin, buffer);
        buffer = ft_replace(buffer, av[2], av[3]);
        fout << buffer;
        if(!fin.eof())
            fout << std::endl;
    }
    fin.close();
    fout.close();
    return 0;
}