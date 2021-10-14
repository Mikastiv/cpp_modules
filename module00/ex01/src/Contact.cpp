/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 04:15:41 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 03:50:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iomanip>
#include <iostream>

Contact::Contact(const std::string& firstname_, const std::string& lastname_,
    const std::string& nickname_, const std::string& phone_, const std::string& secret_)
    : firstname(firstname_),
      lastname(lastname_),
      nickname(nickname_),
      phone(phone_),
      secret(secret_)
{
}

Contact::Contact() : firstname(""), lastname(""), nickname(""), phone(""), secret("") {}

void Contact::print_column(size_t index) const
{
    std::string first = firstname.length() > 9 ? firstname.substr(0, 9) + "." : firstname;
    std::string last = lastname.length() > 9 ? lastname.substr(0, 9) + "." : lastname;
    std::string nick = nickname.length() > 9 ? nickname.substr(0, 9) + "." : nickname;

    std::cout << std::setw(10) << std::left << index << '|';
    std::cout << std::setw(10) << first << '|';
    std::cout << std::setw(10) << last << '|';
    std::cout << std::setw(10) << nick << std::endl;
}

void Contact::print_full() const
{
    std::cout << "\nFirst name: " << firstname << '\n';
    std::cout << "Last name: " << lastname << '\n';
    std::cout << "Nickname: " << nickname << '\n';
    std::cout << "Phone number: " << phone << '\n';
    std::cout << "Darkest secret: " << secret << '\n' << std::endl;
}
