/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 04:21:24 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 12:52:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

#include <limits>

void Phonebook::add()
{
    std::string first;
    std::string last;
    std::string nick;
    std::string phone;
    std::string secret;

    std::cout << "Enter first name> " << std::flush;
    std::cin >> first;
    std::cout << "Enter last name> " << std::flush;
    std::cin >> last;
    std::cout << "Enter nickname> " << std::flush;
    std::cin >> nick;
    std::cout << "Enter phone number> " << std::flush;
    std::cin >> phone;
    std::cout << "Enter darkest secret> " << std::flush;
    std::cin >> secret;

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
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Bad index\nChoose an index> " << std::flush;
        std::cin >> index;
    }
    contacts[index].print_full();
}
