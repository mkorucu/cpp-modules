/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:11:15 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/17 21:51:39 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

using namespace std;

class Contact
{
    private:
        string  FirstName;
        string  LastName;
        string  NickName;
        string  DarkestSecret;
        int     PhoneNumber:
    public:
        Contact(int number, string name);
        void    ShowContact();
        string  GetFirstName();
        string  GetLastName();
        string  GetNickName();
        string  GetDarkestSecret();
        int     GetPhoneNumber();
        string  showNames(string name);
};

class PhoneBook
{
    private:
        Contact contact[8];
        int     index;
        int     size;
    public:
        Contact GetContact(Contact *contact, int index);  //
    
};
#endif