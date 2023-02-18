/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:23:44 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/18 01:54:36 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

/*
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
        void    SetContact(string FN, string LN, string NN, string DS, int PN, int i);
        void    ShowContact();
        string  GetFirstName();
        string  GetLastName();
        string  GetNickName();
        string  GetDarkestSecret();
        int     GetPhoneNumber();
        int     GetIndex();
        string  showNames(string name);
};
*/

void    Contact::SetContact(int i)
{
    string  FN, LN, NN, DS;
    int     PN;
    cout << "Type first name: ";
    cin >> FN;
    cout<< "Type last name: ";
    cin >> LN;
    cout << "Type nickname: ";
    cin >> NN;
    cout << "Type Darkest secret: ";
    cin >> DS;
    cout << "Type phone number: ";
    cin >> PN;
    FirstName = FN;
    LastName = LN;
    NickName = NN;
    DarkestSecret = DS;
    PhoneNumber = PN;
    Index = i;
}

void    Contact::ShowContact()
{
    cout <<"|         "<< Index + 1 << "|";
    Contact::DisplayString(FirstName);
    Contact::DisplayString(LastName);
    Contact::DisplayString(NickName);
    cout<<endl;
}

void    Contact::DisplayString(string str)
{
    if (str.length()> 10)
    {
        for (int i = 0; i < 9; i++)
            cout << str[i];
        cout<<".";
    }
    else
    {
        for (int i = 10; i > str.length(); i--)
            cout << " ";
        for (int i = 0; i < str.length(); i++)
            cout << str[i];
    }
    cout <<"|";
}
string  Contact::GetFirstName()
{
    return (FirstName);
}

string  Contact::GetLastName()
{
    return (LastName);
}

string  Contact::GetNickName()
{
    return (NickName);
}

string  Contact::GetDarkestSecret()
{
    return (DarkestSecret);
}

int Contact::GetIndex()
{
    return (Index);
}
