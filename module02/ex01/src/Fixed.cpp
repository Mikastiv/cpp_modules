/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:10:01 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 01:33:43 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value_) : value(value_ << frac_bits)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value_) : value((int)roundf(value_ * (float)(1 << frac_bits)))
{
    std::cout << "Float constructor called\n";
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
    return value;
}

void Fixed::setRawBits(const int raw)
{
    value = raw;
}

float Fixed::toFloat() const
{
    return (float)value / (float)(1 << frac_bits);
}

int Fixed::toInt() const
{
    return value >> frac_bits;
}

const int Fixed::frac_bits = 8;

std::ostream& operator<<(std::ostream& s, const Fixed& value)
{
    s << value.toFloat();
    return s;
}
