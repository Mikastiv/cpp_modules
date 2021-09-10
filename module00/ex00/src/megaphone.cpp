/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 01:23:23 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 22:27:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char** argv)
{
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    char* ptr;
    for (int i = 1; i < argc; ++i) {
        ptr = argv[i];
        for (; *ptr; ++ptr) {
            std::cout << (char)std::toupper(*ptr);
        }
    }
    std::cout << std::endl;
}
