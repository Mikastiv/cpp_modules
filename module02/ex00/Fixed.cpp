/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:10:01 by mleblanc          #+#    #+#             */
/*   Updated: 2021/10/25 20:34:05 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

const int Fixed::frac_bits = 8;

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Assignation operator called\n";

    if (&rhs != this)
        value = rhs.getRawBits();

    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return value;
}

void Fixed::setRawBits(const int raw)
{
    value = raw;
}
