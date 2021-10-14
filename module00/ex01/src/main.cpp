/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 02:19:04 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/08 02:32:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    std::string input;
    Phonebook   phonebook;

    for (;;) {
        std::cout << "==Phonebook==\nCommands: ADD SEARCH EXIT\n> " << std::flush;
        std::cin >> input;
        if (input == "ADD") {
            phonebook.add();
        } else if (input == "SEARCH") {
            phonebook.search();
        } else if (input == "EXIT") {
            break;
        }
    }
}
