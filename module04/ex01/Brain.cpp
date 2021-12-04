/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:51:10 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/11 23:11:58 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
    std::cout << "Default Ctor: Brain created\n";
}

Brain::Brain(const Brain& other)
{
    *this = other;

    std::cout << "Copy Ctor: Brain created\n";
}

Brain::~Brain()
{
    std::cout << "Dtor: Brain destroyed\n";
}

Brain& Brain::operator=(const Brain& rhs)
{
    for (size_t i = 0; i < 100; ++i) {
        ideas[i] = rhs.ideas[i];
    }

    return *this;
}

const std::string& Brain::getIdea(const size_t index) const
{
    return ideas[index];
}

void Brain::setIdea(const std::string& idea, const size_t index)
{
    ideas[index] = idea;
}
