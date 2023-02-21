/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:58:59 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 15:29:18 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phoneBook.hpp"

phoneBook::phoneBook(int added)
{
    total = added;
}
void    phoneBook::addContact()
{
    contacts[total % 8].setContact(total % 8);
    phoneBook::updateTotal(1);
    std::cout<< BLU <<"Contact is being added.."<< RST <<std::endl;
    sleep(1);
    if (total <= 8)
        std::cout << GRN <<"Contact is added successfully! ["<<total<<"/8]"<< RST <<std::endl;
    else
        std::cout << YEL << "List is full! Oldest contact was deleted!"<< RST << std::endl;
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
    std::cout<< BLU << "listing contacts.."<< RST << std::endl;
    sleep(1);
    if (total == 0)
    {
        std::cout << RED << "Nothing to Search, add some contacts!"<< RST << std::endl;
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
            std::cout<< BLU << "Downloading the contact information.." << RST << std::endl;
            sleep(1);
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