/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:04:01 by mleblanc          #+#    #+#             */
/*   Updated: 2021/11/01 13:27:42 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::Point(const float x_, const float y_) : x(x_), y(y_) {}

Point::~Point() {}

Point& Point::operator=(const Point&)
{
    return *this;
}

Fixed Point::getX() const
{
    return Fixed(x);
}

Fixed Point::getY() const
{
    return Fixed(y);
}
