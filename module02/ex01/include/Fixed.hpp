/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:10:23 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 10:24:28 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed&);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();

    Fixed& operator=(const Fixed&);

    int   getRawBits() const;
    void  setRawBits(const int raw);
    float toFloat() const;
    int   toInt() const;

private:
    static const int frac_bits;
    int              value;
};

std::ostream& operator<<(std::ostream& s, const Fixed& value);
