/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:11:15 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/18 01:35:07 by mkorucu          ###   ########.fr       */
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
        int     PhoneNumber;
        int     Index;
    public:
        void    SetContact(int i);
        void    ShowContact();
        void    DisplayString(string str);
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
        void    AddContact();
        void    SearchContacts();
        int     GetIndex();
        void    GetContact(int i);
        void    updateIndex();
};
#endif