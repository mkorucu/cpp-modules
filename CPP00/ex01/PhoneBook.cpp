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
    std::string input;
    bool checker = false;
    do
    {
        unsigned int i = 0;
        std::cout << "enter the index of the contact to be displayed: ";
        std::cin >> input;
        for (i = 0; i < input.length(); i++)
        {
            if (!isdigit(input[i]))
                break ;
        }
        if (i < input.length() || input == "")
        {
            std::cout << RED <<"Invalid input! Please re-enter.." << RST << std::endl;
            continue;
        }
        if (std::stoi(input) - 1 >= 0 && std::stoi(input) - 1 < total && std::stoi(input) <= 8)
        {
            contacts[std::stoi(input) - 1].displayResult();
            checker = true;
        }
        else
            std::cout << RED <<"Invalid input! Please re-enter.." << RST << std::endl;
    } while (!checker);
}