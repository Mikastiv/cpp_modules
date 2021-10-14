/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:43:55 by mleblanc          #+#    #+#             */
/*   Updated: 2021/09/10 02:13:52 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed formula(const Point a, const Point b, const Point c)
{
    return (b.getY() - c.getY()) * (a.getX() - c.getX()) +
           (c.getX() - b.getX()) * (a.getY() - c.getY());
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    Fixed denom = formula(a, b, c);
    Fixed p1 = formula(point, b, c) / denom;
    Fixed p2 = formula(point, c, a) / denom;
    Fixed p3 = Fixed(1) - p1 - p2;

    return Fixed(0) < p1 && p1 < Fixed(1) && Fixed(0) < p2 && p2 < Fixed(1) && Fixed(0) < p3 &&
           p3 < Fixed(1);
}
