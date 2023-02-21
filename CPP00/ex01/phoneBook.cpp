/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:58:59 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 13:34:11 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phoneBook.h"

phoneBook::phoneBook(int added)
{
    total = added;
}
void    phoneBook::addContact()
{
    contacts[total % 8].setContact(total % 8);
    contacts[total & 8].showContacts();
    total++;
    std::cout<<"Contact is being added.."<<std::endl;
    //sleep(1);
    if (total <= 8)
        std::cout <<"\nContact is added successfully! ["<<total<<"/8]"<<std::endl;
    else
        std::cout <<"\n List is full! Oldest contact ("<< 1 + (total % 8) <<": "<<contacts[total - 1 % 8].getFirstName()<<") was deleted!"<<std::endl;
    sleep(1);
}

void    phoneBook::updateTotal(int i)
{
    total += i;
}

int phoneBook::getIndex()
{
    return ((total % 8) + 1);
}

void    phoneBook::displayContacts()
{
    std::cout<<"listing contacts.."<<std::endl;
    sleep(1);
    if (total == 0)
    {
        std::cout << "Nothing to Search, add some contacts!"<< std::endl;
        sleep(1);
        return ;
    }
    std::cout << " ___________________________________________ "<< std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|"<< std::endl;
    for (int i = 0; i < total && i < 8; i++)
    {
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        contacts[i].showContacts();
    }
    std::cout << " ------------------------------------------- " << std::endl;
    phoneBook::searchContacts();
}

void    phoneBook::searchContacts()
{
    int input = -1;
    bool checker = false;
    
    do
    {
        std::cout << "enter the index of the contact to be displayed: ";
        std::cin >> input;
        if (input - 1 < total && input <= 8 && input != 0 && std::cin.good())
        {
            std::cout<<"Downloading the contact information.."<<std::endl;
            sleep(1);
            contacts[input - 1].displayResult();
            checker = true;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please re-enter.." << std::endl;
        } 
    } while (!checker);
}