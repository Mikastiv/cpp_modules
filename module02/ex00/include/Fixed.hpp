/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:10:23 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/09 22:24:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed&);
    ~Fixed();

    Fixed& operator=(const Fixed&);

    int  getRawBits() const;
    void setRawBits(const int raw);

private:
    static const int frac_bits;
    int              value;
};
