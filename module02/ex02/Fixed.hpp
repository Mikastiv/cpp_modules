/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:10:23 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 22:40:04 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
public:
    static const Fixed& max(const Fixed& f1, const Fixed& f2);
    static Fixed&       max(Fixed& f1, Fixed& f2);
    static const Fixed& min(const Fixed& f1, const Fixed& f2);
    static Fixed&       min(Fixed& f1, Fixed& f2);

    Fixed();
    Fixed(const Fixed&);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed& operator=(const Fixed&);

    bool operator>(const Fixed&) const;
    bool operator<(const Fixed&) const;
    bool operator>=(const Fixed&) const;
    bool operator<=(const Fixed&) const;
    bool operator==(const Fixed&) const;
    bool operator!=(const Fixed&) const;

    Fixed  operator+(const Fixed&) const;
    Fixed  operator-(const Fixed&) const;
    Fixed  operator*(const Fixed&) const;
    Fixed  operator/(const Fixed&) const;
    Fixed  operator++(int);
    Fixed  operator--(int);
    Fixed& operator++();
    Fixed& operator--();

    int   getRawBits() const;
    void  setRawBits(const int raw);
    float toFloat() const;
    int   toInt() const;

private:
    static const int frac_bits;
    int              value;
};

std::ostream& operator<<(std::ostream& s, const Fixed& value);
