/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:30:28 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/18 22:31:17 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    char        *input;
    PhoneBook   book(0);
    
    cout<< "Welcome tocrappy awesome phonebook software!"<<endl;
    while(1)
    {
        cout<<"Please type a command listed below:"<<endl;
        cout << "1. ADD\n2. SEARCH\n3. EXIT"<<endl;
        cin >> input;
        if (!strcmp(input, "ADD"))
            book.AddContact();
        else if (!strcmp(input, "SEARCH"))
            book.SearchContacts();
        else if (!strcmp(input, "EXIT"))
            break;
        else
        {
            cout <<"irrelevant input!!"<<endl;
            sleep(1);
        }
    }
    return (0);
}