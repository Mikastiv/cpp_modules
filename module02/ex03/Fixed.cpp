/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:10:01 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 01:34:05 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

const int Fixed::frac_bits = 8;

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    return f1 >= f2 ? f1 : f2;
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    return f1 >= f2 ? f1 : f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    return f1 <= f2 ? f1 : f2;
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    return f1 <= f2 ? f1 : f2;
}

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int value_) : value(value_ << frac_bits) {}

Fixed::Fixed(const float value_) : value((int)roundf(value_ * (float)(1 << frac_bits))) {}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    if (&rhs != this)
        value = rhs.getRawBits();

    return *this;
}

bool Fixed::operator>(const Fixed& rhs) const
{
    return getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return getRawBits() != rhs.getRawBits();
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
    Fixed tmp;

    tmp.setRawBits(getRawBits() + rhs.getRawBits());

    return tmp;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    Fixed tmp;

    tmp.setRawBits(getRawBits() - rhs.getRawBits());

    return tmp;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    Fixed tmp;

    // 24.8 * 24.8 = 16.16
    long result = getRawBits() * rhs.getRawBits();
    tmp.setRawBits((int)(result >> frac_bits));

    return tmp;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    Fixed tmp;

    // 24.8 / 24.8 = 32.0
    long result = ((long)getRawBits() << frac_bits) / (long)rhs.getRawBits();
    tmp.setRawBits((int)result);

    return tmp;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    value++;

    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    value--;

    return tmp;
}

Fixed& Fixed::operator++()
{
    ++value;

    return *this;
}

Fixed& Fixed::operator--()
{
    --value;

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

std::ostream& operator<<(std::ostream& s, const Fixed& value)
{
    s << value.toFloat();

    return s;
}
