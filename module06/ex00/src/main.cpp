/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 23:30:25 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/15 01:54:50 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

bool only_legal_chars(const std::string& str)
{
    int f_count = 0;
    int dot_count = 0;

    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == 'f') {
            ++f_count;
        } else if (str[i] == '.') {
            ++dot_count;
        } else if (!isdigit(str[i])) {
            return false;
        }
    }

    return f_count < 2 && dot_count < 2;
}

bool is_number(const std::string& str, long* num)
{
    long dec;
    char c;
    int  count1 = std::sscanf(str.c_str(), "%ld.%ldf%c%*s", num, &dec, &c);
    int  count2 = std::sscanf(str.c_str(), "%ld%c%*s", num, &c);

    return only_legal_chars(str) && !(count1 == 3 || (count1 != 2 && count2 == 2));
}

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
    long        num = std::numeric_limits<long>::max();
    bool        impossible = !is_number(input, &num) || num > std::numeric_limits<char>::max() ||
                      num < std::numeric_limits<char>::min();
    if (impossible) {
        std::cout << "char: impossible\n";
    } else if (!std::isprint(static_cast<int>(num))) {
        std::cout << "char: Non displayable\n";
    } else {
        std::cout << "char: '" << static_cast<char>(num) << "'\n";
    }

    num = std::numeric_limits<long>::max();
    impossible = !is_number(input, &num) || num > std::numeric_limits<int>::max() ||
                 num < std::numeric_limits<int>::min();
    if (impossible) {
        std::cout << "int: impossible\n";
    } else {
        std::cout << "int: " << static_cast<int>(num) << "\n";
    }

    char* end;
    if (input[input.length() - 1] == 'f' && input.find('.') != std::string::npos) {
        input.erase(input.end() - 1);
    }
    float f = std::strtof(input.c_str(), &end);
    if (*end != '\0' || input.find('.') == input.length() - 1 || input.find('.') == 0) {
        std::cout << "float: impossible\n";
    } else {
        std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";
    }

    double d = std::strtod(input.c_str(), &end);
    if (*end != '\0' || input.find('.') == input.length() - 1 || input.find('.') == 0) {
        std::cout << "double: impossible\n";
    } else {
        std::cout << std::fixed << std::setprecision(1) << "double: " << d << "\n";
    }
}
