/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:34:09 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 00:24:13 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
public:
    Point();
    Point(const Point&);
    Point(const float x, const float y);
    ~Point();
    // Point& operator=(const Point&);

    Fixed getX() const;
    Fixed getY() const;

private:
    const Fixed x;
    const Fixed y;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);