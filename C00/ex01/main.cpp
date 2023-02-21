/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:30:28 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 09:16:38 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int main(void)
{
    string      input;
    PhoneBook   book(0);
    
    cout<< "Welcome tocrappy awesome phonebook software!"<<endl;
    while(!input.compare("EXIT"))
    {
        cout<<"Please type a command listed below:"<<endl;
        cout << "1. ADD\n2. SEARCH\n3. EXIT"<<endl;
        cin >> input;
        if (!input.compare("ADD"))
            book.addContact();
        else if (input.compare("SEARCH"))
            book.searchContacts();
        else
            cout <<"irrelevant input!!"<<endl;
    }
    return (0);
}