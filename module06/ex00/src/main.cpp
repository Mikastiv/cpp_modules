/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:30:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/15 02:50:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

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

    if (input[input.length() - 1] == 'f' && input.find('.') != std::string::npos) {
        input.erase(input.end() - 1);
    }

    char*  end;
    double num = std::strtod(input.c_str(), &end);
    long   num_int = static_cast<long>(num);

    if (*end != '\0' || num_int > std::numeric_limits<char>::max() ||
        num_int < std::numeric_limits<char>::min()) {
        std::cout << "char: impossible\n";
    } else if (!std::isprint(static_cast<int>(num_int))) {
        std::cout << "char: Non displayable\n";
    } else {
        std::cout << "char: '" << static_cast<char>(num_int) << "'\n";
    }

    if (*end != '\0' || num_int > std::numeric_limits<int>::max() ||
        num_int < std::numeric_limits<int>::min()) {
        std::cout << "int: impossible\n";
    } else {
        std::cout << "int: " << static_cast<int>(num_int) << "\n";
    }

    float f = std::strtof(input.c_str(), &end);
    if (*end != '\0') {
        std::cout << "float: impossible\n";
    } else {
        std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";
    }

    double d = std::strtod(input.c_str(), &end);
    if (*end != '\0') {
        std::cout << "double: impossible\n";
    } else {
        std::cout << std::fixed << std::setprecision(1) << "double: " << d << "\n";
    }
}
