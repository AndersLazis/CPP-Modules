/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aputiev <aputiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:19:26 by aputiev           #+#    #+#             */
/*   Updated: 2023/09/20 14:42:38 by aputiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
class Contact 
{
    private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

		bool _checkStringIsAZ(std::string str);
		bool _checkStringIs09(std::string str);
		bool _isEmpty() const;
		

    public:
		Contact();
		~Contact();
		
		bool setFirstName(std::string name);
		bool setLastName(std::string name);
		bool setNickName(std::string name);
		bool setPhoneNumber(std::string number);
		bool setSecret(std::string secret);

		std::string const getFirstName() const;
		std::string const getLastName() const;
		std::string const getNickName() const;
		std::string const getNumber() const;
		std::string const getSecret() const;

		bool printContactInfo() const;
	};

#endif
