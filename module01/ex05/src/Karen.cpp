/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:41:45 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 05:56:20 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#include <iostream>

Karen::Karen()
{
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    actions[0] = &Karen::debug;
    actions[1] = &Karen::info;
    actions[2] = &Karen::warning;
    actions[3] = &Karen::error;
    actions[4] = &Karen::insignificant;
}

void Karen::complain(std::string level)
{
    size_t index = 0;
    for (; index < 4; ++index) {
        if (level == levels[index]) {
            break;
        }
    }

    (this->*actions[index])();
}

void Karen::debug()
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love to get extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup burger.\nI "
                 "just love it!\n\n";
}

void Karen::info()
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon cost more "
                 "money.\nYou "
                 "don’t put enough! If you did I would not have to ask for it!\n\n";
}

void Karen::warning()
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for "
                 "free.\nI’ve "
                 "been coming here for years and you just started working here "
                 "last month.\n\n";
}

void Karen::error()
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable, I want to speak to the manager now.\n\n";
}

void Karen::insignificant()
{
    std::cout << "[ Probably complaining about insignificant problems ]\n\n";
}
