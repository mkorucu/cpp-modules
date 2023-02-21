/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:11:15 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 13:34:37 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <unistd.h>

class Contact
{
    private:
        std::string  _firstName;
        std::string  _lastName;
        std::string  _nickName;
        std::string  _darkestSecret;
        std::string  _phoneNumber;
        int     _index;
    public:
        void    setContact(int i);
        void    showContacts();
        void    displayResult();
        void    displayString(std::string str);
        /* Get Functions */
        std::string  getFirstName();
        std::string  getLastName();
        std::string  getNickName();
        std::string  getDarkestSecret();
        std::string  getPhoneNumber();
        int     getIndex();
        std::string  showNames(std::string name);
};

class phoneBook
{
    private:
        Contact contacts[8];
        int     total;
    public:
        phoneBook(int added);
        void    addContact();
        void    displayContacts();
        void    searchContacts();
        int     getIndex();
        void    getContact(int i);
        void    updateTotal(int i);
};
#endif