#include "PhoneBook.hpp"

void    Contact::setContact(int i)
{
    std::string  FN, LN, NN, DS, PN;
    std::cout << "Type first name: ";
    std::cin >> FN;
    std::cout<< "Type last name: ";
    std::cin >> LN;
    std::cout << "Type nickname: ";
    std::cin >> NN;
    std::cout << "Type Darkest secret: ";
    std::cin >> DS;
    std::cout << "Type phone number: ";
    std::cin >> PN;
    _firstName = FN;
    _lastName = LN;
    _nickName = NN; 
    _darkestSecret = DS;
    _phoneNumber = PN;
    _index = i;
}

void    Contact::showContacts()
{
    std::cout <<"|         "<< Contact::getIndex() + 1 << "|";
    Contact::displayString(Contact::getFirstName());
    std::cout <<"|";
    Contact::displayString(Contact::getLastName());
    std::cout <<"|";
    Contact::displayString(Contact::getNickName());
    std::cout <<"|";
    std::cout<<std::endl;
}

void    Contact::displayString(std::string str)
{
    if (str.length()> 10)
    {
        for (int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout<<".";
    }
    else
    {
        for (unsigned long i = 10; i > str.length(); i--)
            std::cout << " ";
        for (unsigned long i = 0; i < str.length(); i++)
            std::cout << str[i];
    }
}
std::string  Contact::getFirstName()
{
    return (_firstName);
}

std::string  Contact::getLastName()
{
    return (_lastName);
}

std::string  Contact::getNickName()
{
    return (_nickName);
}

std::string  Contact::getDarkestSecret()
{
    return (_darkestSecret);
}

std::string  Contact::getPhoneNumber()
{
    return (_phoneNumber);
}

int Contact::getIndex()
{
    return (_index);
}

void    Contact::displayResult()
{
    std::cout<<"\n---------------Contact-----------------"<<std::endl;
    std::cout<<"First Name: \t"<<Contact::getFirstName()<<std::endl;
    std::cout <<"Last Name: \t"<<Contact::getLastName()<<std::endl;
    std::cout <<"Nickname: \t"<<Contact::getNickName()<<std::endl;
    std::cout <<"Darkest Secret: "<<Contact::getDarkestSecret()<<std::endl;
    std::cout << "Phone Number: \t"<<Contact::getPhoneNumber()<<std::endl;
    std::cout <<"---------------------------------------"<<std::endl;
}