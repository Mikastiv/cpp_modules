/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:04:01 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/03 09:17:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::Point(const float x_, const float y_) : x(x_), y(y_) {}

Point::~Point() {}

bool Point::operator==(const Point& rhs) const
{
    return x == rhs.x && y == rhs.y;
}

Fixed Point::getX() const
{
    return Fixed(x);
}

Fixed Point::getY() const
{
    return Fixed(y);
}
