/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:49:09 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 20:43:26 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed       a;
    const Fixed b(Fixed(5.05f) * Fixed(2));
    Fixed       c(9.87f);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << c << std::endl;
    std::cout << Fixed::min(c, b) << std::endl;

    std::cout << 9.87f / 4.5f << std::endl;
    std::cout << c / Fixed(4.5f) << std::endl;

    return 0;
}
