/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:49:09 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 21:54:25 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>

#include "Fixed.hpp"

int main(void)
{
    Fixed       a;
    const Fixed b(Fixed(5.05f) * Fixed(2));
    Fixed       c(9.87f);
    Fixed       d(c);

    std::cout << "a   = " << a << '\n';
    std::cout << "++a = " << ++a << '\n';
    std::cout << "a   = " << a << '\n';
    std::cout << "a++ = " << a++ << '\n';
    std::cout << "a   = " << a << '\n';
    std::cout << "--a = " << --a << '\n';
    std::cout << "a   = " << a << '\n';
    std::cout << "a-- = " << a-- << '\n';
    std::cout << "a   = " << a << "\n\n";

    std::cout << "b = " << b << '\n';
    std::cout << "a = " << a << '\n';
    std::cout << "max(a, b) = " << Fixed::max(a, b) << "\n\n";

    Fixed t = Fixed::max(c, a);
    t.setRawBits(0xFF0FA);
    t = Fixed::min(a, d);
    t.setRawBits(0xFF0FA);

    std::cout << "b = " << b << '\n';
    std::cout << "c = " << c << '\n';
    std::cout << "min(b, c) = " << Fixed::min(b, c) << "\n\n";

    std::cout << "9.87f + 4.5f = " << 9.87f + 4.5f << '\n';
    std::cout << "c + 4.5 = " << c + Fixed(4.5f) << "\n\n";

    std::cout << "9.87f - 4.5f = " << 9.87f - 4.5f << '\n';
    std::cout << "c - 4.5 = " << c - Fixed(4.5f) << "\n\n";

    std::cout << "9.87f * 4.5f = " << 9.87f * 4.5f << '\n';
    std::cout << "c * 4.5 = " << c * Fixed(4.5f) << "\n\n";

    std::cout << "9.87f / 4.5f = " << 9.87f / 4.5f << '\n';
    std::cout << "c / 4.5 = " << c / Fixed(4.5f) << "\n\n";

    std::cout << std::setw(7) << a << std::setw(4) << " > " << std::setw(7) << b << " = "
              << std::boolalpha << (a > b) << '\n';
    std::cout << std::setw(7) << c << std::setw(4) << " >= " << std::setw(7) << d << " = "
              << std::boolalpha << (c >= d) << '\n';
    std::cout << std::setw(7) << a << std::setw(4) << " < " << std::setw(7) << b << " = "
              << std::boolalpha << (a < b) << '\n';
    std::cout << std::setw(7) << c << std::setw(4) << " <= " << std::setw(7) << d << " = "
              << std::boolalpha << (c <= d) << '\n';
    std::cout << std::setw(7) << c << std::setw(4) << " <= " << std::setw(7) << b << " = "
              << std::boolalpha << (c <= b) << '\n';
    std::cout << std::setw(7) << a << std::setw(4) << " == " << std::setw(7) << b << " = "
              << std::boolalpha << (a == b) << '\n';
    std::cout << std::setw(7) << c << std::setw(4) << " == " << std::setw(7) << d << " = "
              << std::boolalpha << (c == d) << '\n';

    return 0;
}
