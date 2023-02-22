/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:58:59 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 16:03:27 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int added)
{
    total = added;
}
void    PhoneBook::addContact()
{
    contacts[total % 8].setContact(total % 8);
    PhoneBook::updateTotal(1);
    if (total <= 8)
        std::cout << GRN <<"Contact is added successfully! ["<<total<<"/8]"<< RST <<std::endl;
    else
        std::cout << YEL << "List is full! Oldest contact was deleted!"<< RST << std::endl;
}

void    PhoneBook::updateTotal(int i)
{
    total += i;
}

int PhoneBook::getIndex()
{
    return ((total % 8) + 1);
}

void    PhoneBook::displayContacts()
{
    if (total == 0)
    {
        std::cout << RED << "Nothing to Search, add some contacts!"<< RST << std::endl;
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
    PhoneBook::searchContacts();
}

void    PhoneBook::searchContacts()
{
    int input = -1;
    bool checker = false;
    
    do
    {
        std::cout << "enter the index of the contact to be displayed: ";
        std::cin >> input;
        if (input - 1 < total && input <= 8 && input != 0 && std::cin.good())
        {
            contacts[input - 1].displayResult();
            checker = true;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << RED <<"Invalid input! Please re-enter.." << RST << std::endl;
        } 
    } while (!checker);
}