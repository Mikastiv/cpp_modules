/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:34:09 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/03 09:16:24 by mleblanc         ###   ########.fr       */
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

    bool operator==(const Point&) const;

    Fixed getX() const;
    Fixed getY() const;

private:
    Point& operator=(const Point&);

private:
    const Fixed x;
    const Fixed y;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);
