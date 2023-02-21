/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:58:59 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 09:26:51 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.h"

PhoneBook::PhoneBook(int added)
{
    total = added;
}
void    PhoneBook::addContact()
{
    Contact person;
    person.SetContact(total % 8);
    contacts[total % 8] = person;
    total++;
    if (total <= 8)
        cout <<"\nContact added successfully! ["<<total<<"/8]"<<endl;
    else
        cout <<"\n List is full! Oldest contact ("<< total % 8 <<". contact) was deleted!"<<endl;
}

int PhoneBook::GetIndex()
{
    return ((total % 8) + 1);
}

void    PhoneBook::searchContacts()
{
    int input;

    if (total == 0)
    {
        cout << "Nothing to Search, add some contacts!"<< endl;
        sleep(1);
        return ;
    }
    cout << " ___________________________________________ "<< endl;
    cout << "|     Index|First Name| Last Name|  Nickname|"<< endl;
    for (int i = 0; i < total && i < 8; i++)
    {
        cout << "|----------|----------|----------|----------|" << endl;
        contacts[i].ShowContacts();
    }
    cout << " ------------------------------------------- " << endl;
    cout << "enter index of the contact to be displayed: ";
    cin >> input;
    if (input - 1 < total && input <= 8 && input > 0)
    {
        contacts[input - 1].DisplayResult();
    }
    else
        cout << "index is out of range.." << endl;
}