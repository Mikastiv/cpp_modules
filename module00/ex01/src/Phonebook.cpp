/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 04:21:24 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/19 01:01:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

#include <limits>

Phonebook::Phonebook() : size(0), oldest(0) {}

void Phonebook::add()
{
    std::string first;
    std::string last;
    std::string nick;
    std::string phone;
    std::string secret;

    std::cout << "Enter first name> " << std::flush;
    std::getline(std::cin, first);
    if (std::cin.eof())
        return;
    std::cout << "Enter last name> " << std::flush;
    std::getline(std::cin, last);
    if (std::cin.eof())
        return;
    std::cout << "Enter nickname> " << std::flush;
    std::getline(std::cin, nick);
    if (std::cin.eof())
        return;
    std::cout << "Enter phone> " << std::flush;
    std::getline(std::cin, phone);
    if (std::cin.eof())
        return;
    std::cout << "Enter darkest secret> " << std::flush;
    std::getline(std::cin, secret);
    if (std::cin.eof())
        return;

    add_contact(Contact(first, last, nick, phone, secret));
}

void Phonebook::add_contact(Contact contact)
{
    if (size < PB_SIZE) {
        contacts[size] = contact;
        ++size;
        oldest = 0;
    } else {
        contacts[oldest] = contact;
        oldest = (oldest + 1) % PB_SIZE;
    }
}

void Phonebook::search() const
{
    if (size == 0) {
        std::cout << "No contacts!\n\n";
        return;
    }

    std::cout << "-------------------------------------------\n";
    std::cout << "Index     |First name|Last name |Nickname\n";
    std::cout << "-------------------------------------------\n";
    for (size_t i = 0; i < size; ++i) {
        contacts[i].print_column(i);
    }
    std::cout << "-------------------------------------------" << std::endl;

    size_t index = 0;
    std::cout << "Choose an index> " << std::flush;
    std::cin >> index;
    while (!std::cin.good() || index >= size) {
        if (std::cin.eof())
            return;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Bad index\nChoose an index> " << std::flush;
        std::cin >> index;
    }
    contacts[index].print_full();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
