/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:30:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/12 22:23:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

#include "Converter.hpp"

int main(int argc, char** argv)
{
    if (argc > 2) {
        std::cerr << "Too many arguments" << std::endl;
        return 1;
    }
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <number>" << std::endl;
        return 1;
    }

    std::string input(argv[1]);

    if (input.empty()) {
        std::cerr << "Can't convert empty string\n";
        return 1;
    }

    Converter converter(input);

    std::cout << converter.to_char() << "\n";
    std::cout << converter.to_int() << "\n";
    std::cout << converter.to_float() << "\n";
    std::cout << converter.to_double() << "\n";
}
