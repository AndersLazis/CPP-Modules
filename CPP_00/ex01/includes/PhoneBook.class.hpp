/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:19:20 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/17 15:48:50 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include "Contact.class.hpp"
class   PhoneBook 
{
private:
    bool    _flagEnd;
    int     _contactIndex;
    Contact _contactList[8];

    std::string	_readLine(std::string message);
    void        _printEachContact(int i);
	bool		_showContact(std::string index);

public:
    PhoneBook();
    ~PhoneBook();

    std::string trimSpaces(std::string new_line);
    bool		addContact();
    bool   		searchContact(void);
};

#endif


 