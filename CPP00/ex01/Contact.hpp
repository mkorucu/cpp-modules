/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:16:32 by mkorucu           #+#    #+#             */
/*   Updated: 2023/02/21 16:13:00 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _darkestSecret;
        std::string _phoneNumber;
        int         _index;
    public:
        void    setContact(int i);
        void    showContacts();
        void    displayResult();
        void    displayString(std::string str);
        /* Get Functions */
        std::string  getFirstName();
        std::string  getLastName();
        std::string  getNickName();
        std::string  getDarkestSecret();
        std::string  getPhoneNumber();
        int     getIndex();
};

#endif