/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:11:15 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 09:21:19 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <unistd.h>

using namespace std;

class Contact
{
    private:
        string  FirstName;
        string  LastName;
        string  NickName;
        string  DarkestSecret;
        string  PhoneNumber;
        int     Index;
    public:
        void    SetContact(int i);
        void    ShowContacts();
        void    DisplayResult();
        void    DisplayString(string str);
        /* Get Functions */
        string  GetFirstName();
        string  GetLastName();
        string  GetNickName();
        string  GetDarkestSecret();
        int     GetPhoneNumber();
        int     GetIndex();
        string  showNames(string name);
};

class PhoneBook
{
    private:
        Contact contacts[8];
        int     total;
    public:
        PhoneBook(int added);
        void    addContact();
        void    searchContacts();
        int     GetIndex();
        void    GetContact(int i);
        void    updateIndex();
};
#endif