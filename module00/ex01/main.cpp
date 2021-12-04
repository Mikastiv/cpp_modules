/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 02:19:04 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/16 16:01:38 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    std::string input;
    Phonebook   phonebook;

    while (std::cin.good()) {
        std::cout << "== Phonebook ==\nCommands: ADD SEARCH EXIT\n> " << std::flush;
        std::getline(std::cin, input);
        if (input == "ADD") {
            phonebook.add();
        } else if (input == "SEARCH") {
            phonebook.search();
        } else if (input == "EXIT") {
            break;
        } else if (std::cin.eof()) {
            continue;
        } else {
            std::cerr << "Error: Invalid command\n\n";
        }
    }
}
