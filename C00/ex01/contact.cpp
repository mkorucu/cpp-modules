/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:23:44 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/18 04:02:20 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

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

void    Contact::ShowContacts()
{
    cout <<"|         "<< Index + 1 << "|";
    Contact::DisplayString(FirstName);
    cout <<"|";
    Contact::DisplayString(LastName);
    cout <<"|";
    Contact::DisplayString(NickName);
    cout <<"|";
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

void    Contact::DisplayResult()
{
    cout<<"First Name: "<<FirstName<<endl;
    cout <<"Last Name: "<<LastName<<endl;
    cout <<"Nickname: "<<NickName<<endl;
    cout <<"Darkest Secret: "<<DarkestSecret<<endl;
    cout << "Phone Number: "<<PhoneNumber<<endl;
}