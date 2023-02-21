/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:30:28 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 16:03:28 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string     input;
    PhoneBook       phoneBook(0);
    
    std::cout<< GRN << "WELCOME TO CRAPPY AWESOME PHONEBOOK SOFTWARE!🥳🎉🍾" << RST << std::endl;
    while(1)
    {
        std::cout<<"\n---------------Manual------------------"<<std::endl;
        std::cout << "1. ADD\t  : Adds contact to phonephoneBook."<<std::endl;
        std::cout <<"2. SEARCH : Shows contacts and searchs."<<std::endl;
        std::cout <<"3. EXIT   : Closes phonephoneBook."<<std::endl;
        std::cout <<"---------------------------------------"<<std::endl<<"_>";
        std::cin >> input;
        if (!input.compare("ADD"))
            phoneBook.addContact();
        else if (!input.compare("SEARCH"))
            phoneBook.displayContacts();
        else if (!input.compare("EXIT"))
            break;
        else
            std::cout <<RED<<"irrelevant input!!"<<RST<<std::endl;
    }
    return (0);
}