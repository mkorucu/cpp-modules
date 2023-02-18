/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:02:49 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/18 03:32:30 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

/*
class PhoneBook
{
    private:
        Contact contacts[8];
        int     total;
    public:
        PhoneBook(int added);
        void    AddContact();
        void    ShowContacts();
        int     GetIndex();
        void    GetContact(int i);
        void    updateIndex();
        void    UpdateIndex(int i);
};
*/

PhoneBook::PhoneBook(int added)
{
    total = added;
}
void    PhoneBook::AddContact()
{
    Contact person;
    person.SetContact(total % 8);
    contacts[total % 8] = person;
    total++;
    if (total <= 8)
        cout <<"\nContact added successfully! ["<<total<<"/8]"<<endl;
    else
        cout <<"\n List is full! Oldest contact was deleted!"<<endl;
    sleep(1);
}

int PhoneBook::GetIndex()
{
    return ((total % 8) + 1);
}

void    PhoneBook::SearchContacts()
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
        contacts[i].ShowContact();
    }
    cout << " ------------------------------------------- " << endl;
    cout << "enter index of the contact to be displayed: ";
    cin >> input;
    if (input - 1 < total && input <= 8 && input > 0)
    {
        cout << " ___________________________________________ "<< endl;
        cout << "|     Index|First Name| Last Name|  Nickname|"<< endl;
        cout << "|----------|----------|----------|----------|" << endl;
        contacts[input - 1].ShowContact();
        cout << " ------------------------------------------- " << endl;
    }
    else
    {
        cout << "index is out of range.." << endl;
        //sleep(1);
    }
}